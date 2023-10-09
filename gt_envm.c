#include "_shell.h"

/**
 * 
 * 
 * 
 * 
*/


char *_get_envm(char *valr)
{

int iterat ;
char *temp, *valu, *envmd, *kygen;
for(iterat = 0; environ[iterat]; iterat++)
{
temp = _strdup(environ[iterat++]);
kygen = strtok (temp, "=");
if (_strcmp(kygen, valr) == 0)
{
valu = strtok(NULL, "\n"); 
envmd = _strdup(valu);   /*declaring the duplucat of valu befor freeing the memory*/
free(temp);
return (envmd);
}
free(temp), temp = NULL;
}
return (NULL);
}


