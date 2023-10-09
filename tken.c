#include "_shell.h"

/**
 * 
 * 
 * 
*/







char **tokeniser(char *line)
{

char **command = NULL;
char *temp = NULL;
char *tokn = NULL;
int counter = 0;
int i = 0;


if (!line)
return (NULL);
temp = strdup (line);
tokn = strtok(temp, DELIMTR);


/*token iteration and counting*/
while (tokn)
{
    counter++;
    tokn = strtok(NULL, DELIMTR);
}
free(temp), temp = NULL;


/*telp iteration and counting*/
while (temp)
{
counter++;
tokn = strtok(NULL, DELIMTR);
}

free(temp), temp = NULL;



command = malloc(sizeof(char *) * (counter + 1)); /* counter = 4 + 1 = 5 then 5 * 8(chart bytes) = 40 bytes */
if (!command)
{
    free (line), line = NULL;
    return (NULL);
}
tokn = strtok(line, DELIMTR);


while (tokn)
{
command[i] = strdup(tokn);   /*duplucate to point to another char*/
tokn = strtok(NULL, DELIMTR);
i++;
}
free (line), line = NULL;
command [i] = NULL ;
return (command); /*return every str alone*/


}
