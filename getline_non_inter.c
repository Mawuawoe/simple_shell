/**
 *  read_input_non_inter - a function that getlie
 * @av: accpet a string as parameter
 * Return: an int
*/
#include "shell.h"

int read_input_non_inter(char **av)
{
/*char *args[50];*/ /*array of strings*/
char buff[100]; /*buff to store the user input*/
char *read;
char *trim_buff;
(void) av;

read = fgets(buff, sizeof(buff), stdin);
while (read != NULL)
{
/*printf("%s", buff);*/
if (feof(stdin))
{
exit(0);
}
if (buff[(_strlen(buff) - 1)] == '\n')
{
buff[(_strlen(buff) - 1)] = '\0';
}
trim_buff = remove_spaces(buff);
/*printf("%s\n",trim_buff);*/
/*tokenize(buff, av);*/
excute_1(trim_buff, av);
read = fgets(buff, sizeof(buff), stdin);
}
return (0);
}
