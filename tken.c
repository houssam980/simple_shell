#include "_shell.h"

/**
 *tokeniser - make tookniser
 *@ln: line
 *Return: return command line or NULL if error
*/
char **tokeniser(char *ln) 
{
char **command_lns = NULL;
char *temp = NULL;
char *tokn = NULL;
int counter = 0;
int iterat = 0;

if (!ln)
return (NULL);
temp = strdup(ln);
tokn = strtok(temp, DELIMTR);
while (tokn)
{
counter++;
tokn = strtok(NULL, DELIMTR);
}
free(temp), temp = NULL;
if (counter == 0)
return (NULL);
command_lns = malloc(sizeof(char *) * (counter + 1));
if (!command_lns)
{
free(ln);
return (NULL);
}
tokn = strtok(ln, DELIMTR);
while (tokn)
{
command_lns[iterat] = strdup(tokn);
tokn = strtok(NULL, DELIMTR);
iterat++;
}
free(ln);
command_lns[iterat] = (NULL);
return command_lns;
}
