/**
 * excute - funtion to excute the command
 * @argvec: the command to execute
 * @av: argument vector
 * Return: an int
*/
#include "shell.h"

int excute(char *argvec[], char **av)
{
/*int i = 0;*/
pid_t  pid;
pid = fork();
if (pid == -1)
{
exit(EXIT_FAILURE);
}
if (pid == 0)
{
int val = execve(argvec[0], argvec, NULL);
if (val == -1)
{
perror(av[0]);
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
return (0);
}
