 #include "_shell.h"

/**
*arryfreedome - free from memory
*@arr_y: arry
*Return: Nothing to return
*/

void arryfreedome(char **arr_y)
{
int iterate;
if (!arr_y)
return;
for (iterate = 0; arr_y[iterate]; iterate++)
{
free(arr_y[iterate]), arr_y[iterate] =  NULL;
}
free(arr_y), arr_y = NULL;
}

/**
*print_error - error printer
*@nm:command name
*@cmd: command
*@id_x: command index
*Return : nothing to return
*/

void print_error(char *nm, char *cmd, int id_x)
{

char *index, mssg[] = ": not found\n";
index = _itoi(id_x);
write(STDERR_FILENO, nm, _strlen(nm));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, index, _strlen(index));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cmd, _strlen(cmd));
write(STDERR_FILENO, mssg, _strlen(mssg));
free(index);
}


/**
* _itoi - make buffer
* @nj: param
* Return: return buffer
*/

char *_itoi(int nj)
{
char buffer[20];
int iterate = 0;
if (nj == 0)
buffer[iterate++] = '0';
else
{
while (nj > 0)
{
buffer[iterate++] = (nj % 10) + '0';
nj /= 10;
}
}
buffer[iterate] = '\0';
revs_str(buffer, iterate);
return (_strdup(buffer));
}

/**
* revs_str - reverse a string
* @str: string to reverse
* @lengh: str length
* Return: nothing to return
*/
void revs_str(char *str, int lengh)
{
char tmp;
int sta_s = 0;
int end_s = lengh - 1;
while (sta_s < end_s)
{
tmp = str[sta_s];
str[sta_s] = str[end_s];
str[end_s] = tmp;
sta_s++;
end_s--;
}
}
