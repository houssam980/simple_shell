#include "_shell.h"

/**
 *_get_pth - PATH command getting
 * @command_lns: command line
 * Return: return 1 f path excists 0 if error
*/
char *_get_pth(char *command_lns)
{
char *pth_envm, *fl_cmd, *directory;
int iterat;
struct stat sts;
for (iterat = 0; command_lns[iterat]; iterat++)
{
if (command_lns[iterat] == '/')
{
if (stat(command_lns, &sts) == 0)
return (_strdup(command_lns));
return (NULL);
}
}
pth_envm = _get_envm("PATH");
if (!pth_envm) /* case : return NULL if PTH unset*/
return (NULL);
directory = strtok(pth_envm, ":");
while (directory)
{
fl_cmd = malloc(_strlen(directory) + _strlen(command_lns) + 2);
if (fl_cmd)
{
_strcpy(fl_cmd, directory);
_strcat(fl_cmd, "/");
_strcat(fl_cmd, command_lns);
if (stat(fl_cmd, &sts) == 0)
{
free(pth_envm);
return (fl_cmd);
}
free(fl_cmd), fl_cmd = NULL;
directory = strtok(NULL, ":");
}
}
free(pth_envm);
return (NULL);
}
