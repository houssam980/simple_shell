#include "_shell.h"


char *red_line(void)
{
char *line = NULL ; /*line*/
size_t leng = 0; /*lenght*/
ssize_t n;    /*new line*/


if (isatty(STDIN_FILENO)) /*if standar input is a terminal */
write(STDOUT_FILENO, "$ ", 2);  /*Display to the user the prompt sign withe space and handel 2 chars*/
n = getline(&line, &leng, stdin );
if (n == -1)
{
free(line);
return (NULL);
}

return (line);




}
