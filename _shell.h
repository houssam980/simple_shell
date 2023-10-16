#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>



extern char **environ; /*global variable environ*/

#define DELIMTR " \t\n"  /*delimetre*/
 



/*str functions*/
char *_strcpy(char *desti, char *srcs);
char *_strcat(char *desti, char *srcs);
char *_strdup(const char *str);
int _strlen(char *s);
int _strcmp(char *stri_f, char *stri_s);


/*main funcs*/
char **tokeniser(char *ln);
int _excute(char **cmd, char **argv, int id_x);
void arryfreedome(char **arr_y);
char *_get_envm(char *valr);
char *red_line(void);
char *_get_pth(char *command_lns);
void print_error(char *nome, char *cmd, int id_x);
char *_itoi(int num);
void revs_str(char *str, int lengh);

/*shell functions*/
int is_builtin(char *command_lns);
void built_in(char **command_lns, char **argv, int *stus, int id_x);
void exit_shell(char **command_lns, int *stus);
void print_env(char **command_lns, int *stus);



#endif
