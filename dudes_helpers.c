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
for(iterate = 0; arr_y[iterate]; iterate++)
{
free(arr_y[iterate]), arr_y[iterate] =  NULL;
}
free(arr_y), arr_y = NULL;
}
/**
*print_error - error printer
*@nome: command name
*@cmd: command
*@id_x: command index
*Return : 
*/
void print_error(char *nome, char *cmd, int id_x)
{
char *indx, mssg[] = ": not found\n";
indx = _itoi(id_x);
write(STDERR_FILENO, nome, _strlen(nome));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, indx, _strlen(indx));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cmd, _strlen(cmd));
write(STDERR_FILENO, mssg, _strlen(mssg));
free(indx);
}

/**
 * _itoi - make buffer
 * @_itoi: param
 * Return: return buffer
*/

char *_itoi(int _itoi)
{
char buffer[20];
int iterat = 0;
if (num == 0)
buffer[iterat++] = '0';
else
{
while (num > 0)
{
buffer[iterat++] = (num % 10) + '0';
num /= 10;
}
}
buffer[iterat] = '\0';
revs_str(buffer, iterat);
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
int sta_st = 0;
int end_st = lengh - 1;
while (sta_st < end_st)
{
tmp = str[sta_st];
str[sta_st] = str[end_st];
str[end_st] = tmp;
sta_st++;
end_st--;
}
}
