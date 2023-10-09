#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>




#define DELIMTR " \t\n"  /*delimetre*/
 
extern char **environ;


char *red_line(void);
char *_strdup(const char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

char **tokeniser(char *line);
int _excute(char **command, char **argv);
void arryfreedome(char **arr);
char *_get_envm(char *valr);



#endif
