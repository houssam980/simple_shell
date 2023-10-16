#include "_shell.h"

/**
 *_excute - excute function
 *@cmd:command
 *@argv:arguments
 *@id_x:index
 *Return: Return command status
*/
int _excute(char **cmd, char **argv, int id_x)
{
char *f_cmd;
pid_t son;
int stus;
f_cmd = _get_pth(cmd[0]);
if (!f_cmd || !cmd[0])
{
print_error(argv[0], cmd[0], id_x);
arryfreedome(cmd);
return 127;
}
son = fork();
if (son == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
if (son == 0)
{
if (execve(f_cmd, cmd, environ) == -1)
{
perror("execve");
exit(EXIT_FAILURE);
}
}
else
{
waitpid(son, &stus, 0);
arryfreedome(cmd);
free(f_cmd);
}
return WEXITSTATUS(stus);
}
