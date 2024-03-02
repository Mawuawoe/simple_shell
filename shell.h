#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include<sys/wait.h>
#include <sys/stat.h>


int _putstr(char *c);
void display_prompt(void);
int read_input(char **av);
int tokenize(char *buff, char **av);
int excute(char *argvec[], char **av);
int excute_1(char *buff, char **av);
int read_input_non_inter(char **av);
int _strlen(char *str);
/*char *remove_spaces(char *str);*/


#endif
