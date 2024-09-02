/**
 * excute - funtion to excute the command
 * @argvec: the command to execute
 * @av: argument vector
 * Return: an int
*/
#include "shell.h"

int excute_with_path(char *argvec[], char **av)
{
/*int i = 0;*/
pid_t  pid;
int status;
char *full_cmd;
struct stat st;

if( stat(argvec[0], &st) == 0)
{
    excute(argvec, av);
}
else
{
full_cmd = handle_path(argvec[0]);
pid = fork();
if (pid == -1)
{
exit(EXIT_FAILURE);
}
if (pid == 0)
{
int val = execve(full_cmd, argvec, NULL);
if (val == -1)
{
/*free(full_cmd);
full_cmd = NULL;
freearray2D(argvec);*/
perror(av[0]);
exit(EXIT_FAILURE);
}
}
else
{
waitpid(pid, &status, 0);
}
}
/*free(full_cmd);
full_cmd = NULL;
freearray2D(argvec);*/
return (0);
}
