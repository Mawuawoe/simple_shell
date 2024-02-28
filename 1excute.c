#include "shell.h"
/**
 * excute_1 - funtion to excute the command
 * @buff: the command to execute
 * @av: argument vector
 * Return: an int
*/

int excute_1(char *buff, char **av)
{
pid_t  pid;
char *arg[] = {NULL, NULL};
arg[0] = buff;
pid = fork();
if (pid == -1)
{
exit(EXIT_FAILURE);
}
if (pid == 0)
{
int val = execve(arg[0], arg, NULL);
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
