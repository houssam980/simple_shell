#include "_shell.h"
/**
*red_line - read command line
*@void: void
*Return: return line if exists
*/

char *red_line(void)
{
char *ln = NULL ; /*line*/
ssize_t nuv;/*new line*/
size_t lenght = 0;/*lenght*/
if (isatty(STDIN_FILENO)) /*if standar input is a terminal */
write(STDOUT_FILENO, "$ ", 2);/*Display to the user the prompt*/
nuv = getline(&ln, &lenght, stdin);
if (nuv == -1)
{
free(ln);
return (NULL);
}
return (ln);
}
