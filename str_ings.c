#include "_shell.h"

/**
*_strlen - string lenght
*@s:string  get lenght
*Return:
*/
int _strlen(char *s)
{
int iterat = 0;
if (!s)
return (0);
while (*s++)
iterat++;
return (iterat);
}

/**
* _strcat - concatenates two strings
* @desti: the destination buffer
* @srcs: the source buffer
* Return: pointer to destination buffer
*/
char *_strcat(char *desti, char *srcs)
{
char *retu = desti;
while (*desti)
desti++;
while (*srcs)
*desti++ = *srcs++;
*desti = *srcs;
return (retu);
}

/**
* _strdup - duplicates a string
* @str: the string to duplicate
* Return: pointer to the duplicated string
*/
char *_strdup(const char *str)
{
int length = 0;
char *retu;
if (str == NULL)
return (NULL);
while (*str++)
length++;
retu = malloc(sizeof(char) * (length + 1));
if (!retu)
return (NULL);
for (length++; length--;)
retu[length] = *--str;
return (retu);
}

/**
*_strcmp - comparison two string
*@stri_f: string one
*@stri_s: string two
*Return: negative if stri_f < stri_s, 
*positive if stri_f > stri_s, zero if stri_f == stri_s
 */
int _strcmp(char *stri_f, char *stri_s)
{
while (*stri_f && *stri_s)
{
if (*stri_f != *stri_s)
return (*stri_f - *stri_s);
stri_f++;
stri_s++;
}
if (*stri_f == *stri_s)
return (0);
else
return (*stri_f < *stri_s ? -1 : 1);
}

/**
 *_strcpy - copy string
 *@desti: distnation
 *@srcs: source
 * Return : return destination
*/
char *_strcpy(char *desti, char *srcs)
{
int itera = 0;
if (desti == srcs || srcs == 0)
return (desti);
while (srcs[itera])
{
desti[itera] = srcs[itera];
itera++;
}
desti[itera] = 0;
return (desti);
}
