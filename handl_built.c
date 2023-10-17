#include "_shell.h"
/**
 * is_builtin - test command if buit in
 * @command_lns: command line
 * Return: return 1 if true , 0 if Error
*/
int is_builtin(char *command_lns)
{
char *builts[] = {
"exit", "env", "setenv", "cd", NULL
};
int iterate;
for (iterate = 0; builts[iterate]; iterate++)
{
if (_strcmp(command_lns, builts[iterate]) == 0)
return (1);
}
return (0);
}

/**
 * built_in - build the cmd
 * @command_lns: command line
 * @argv:arguments to pass
 * @stus: status
 * @id_x: index
 * Return: nothing to return
*/
void built_in(char **command_lns, char **argv, int *stus, int id_x)
{
(void) id_x; /*casted to void cz ain't use it here*/
(void) argv; /*casted to void cz ain't use it here*/
if (_strcmp(command_lns[0], "exit") == 0)
exit_shell(command_lns, stus);
else if (_strcmp(command_lns[0], "env") == 0)
print_env(command_lns, stus);
}

/**
 *exit_shell - exite the shell
 *@command_lns: command line
 *@stus: status
 *Return: nothing to return
*/
void exit_shell(char **command_lns, int *stus)
{
arryfreedome(command_lns); /*free for no leaks*/
exit(*stus);
}

/**
 *print_env - env printer
 *@command_lns: command line
 *@stus: status
 * Return : nothing to return
*/

void print_env(char **command_lns, int *stus)
{
int iterate;
for (iterate = 0; environ[iterate]; iterate++)
{
write(STDOUT_FILENO, environ[iterate], _strlen(environ[iterate]));
write(STDOUT_FILENO, "\n", 1);
}
arryfreedome(command_lns);
(*stus) = 0;
}
