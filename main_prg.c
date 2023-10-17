#include "_shell.h"

/**
* main - main programme executer
* @ac: amount of argum
* @argv: argums
* Return: return 0
*/

int main(int ac, char **argv)
{
char *ln = NULL; /*line*/
int stus = 0, id_x = 0;   /*status*/ /*id_x*/
char **command_lns = NULL; /*command*/
(void)ac;
while (1)
{
ln = red_line(); /*read line func*/
if (ln == NULL) /*Ctrl D to exit*/
{
if (isatty(STDIN_FILENO)) /*if standar input is a terminal */
write(STDOUT_FILENO, "\n", 1);
return (stus);
}
id_x++;
command_lns = tokeniser(ln);
if (!command_lns)
continue;  /*display the prompt again if no command submited*/

if (is_builtin(command_lns[0]))
built_in(command_lns, argv, &stus, id_x);
else
stus = _excute(command_lns, argv, id_x);
}
}
