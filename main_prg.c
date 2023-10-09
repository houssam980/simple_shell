#include "_shell.h"

/**
 * main - 
 * @ac: amount argum
 * @av: argum
 * Return: return 0
*/


int main (int ac, char **argv)
{
char *line = NULL; /*line*/
int stus = 0;   /*status*/ 
char **command = NULL; /*command*/
(void)ac;



while (1)
{

line = red_line(); /*read line func*/
if (line == NULL) /*Ctrl D to exit*/
{
if (isatty(STDIN_FILENO)) /*if standar input is a terminal */
write(STDOUT_FILENO, "\n", 1);
return (stus);
}


command = tokeniser(line);
if (!command)
continue;  /*display the prompt again if no command submited*/

stus = _excute(command, argv);

}


}
