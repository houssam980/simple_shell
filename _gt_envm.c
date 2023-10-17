#include "_shell.h"

/**
*_get_envm - get envirment
*@valr: variable
*Return: return renvmd if excists otherwise NULL
*/

char *_get_envm(char *valr)
{
int iterat;
char *temp, *valu, *envmd, *kygen;
for (iterat = 0; environ[iterat]; iterat++)
{
temp = _strdup(environ[iterat]);
kygen = strtok(temp, "=");
if (_strcmp(kygen, valr) == 0)
{
valu = strtok(NULL, "\n");
envmd = _strdup(valu);/*declar the duplucat of valu before freeing*/
free(temp);
return (envmd);
}
free(temp), temp = NULL;/*free memory*/
}
return (NULL);
}
