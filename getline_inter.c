/**
 *  read_input - a function that getlie
 * @av: accpet a string as parameter
 * Return: an int
*/
#include "shell.h"

int read_input(char **av)
{
/*size of the buff set 0*/
size_t n = 0;
/*buff to store string from getline*/
char *buff = NULL;
/*getline returns an int stored in red*/
int red;
char *trim_buff;
red = getline(&buff, &n, stdin);
if (feof(stdin))
{
free(buff);
exit(0);
}
if (red == -1)
{
perror(av[0]);
free(buff);
exit(EXIT_FAILURE);
}
if (buff[(red - 1)] == '\n')
{
buff[(red - 1)] = '\0';
}

/*the string from getline stored in buff is tokenizesd here*/
/*tokenize(buff, av);*/
trim_buff = remove_spaces(buff);
excute_1(trim_buff, av);
return (0);
}
