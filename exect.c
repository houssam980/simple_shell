#include "_shell.h"





int _excute(char **command, char **argv)
{
pid_t child;
int status;

child = fork();
if (child == 0)
{
if (execve(command[0], command, environ) == -1)
{
 perror(argv[0]); /*printing error */
arryfreedome(command); /*free function*/
}
}

else 
{
waitpid(child, &status, 0);
arryfreedome(command);
}
return (WEXITSTATUS(status));

}
