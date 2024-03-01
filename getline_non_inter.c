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
(void) av;

/*read = fgets(buff, sizeof(buff), stdin);
while (read != NULL)
{
printf("%s", buff);*/
if (feof(stdin))
{
exit(0);
}
if (buff[(strlen(buff) - 1)] == '\n')
{
buff[(strlen(buff) - 1)] = '\0';
}
/*tokenize(buff, av);*/
excute_1(buff, av);
read = fgets(buff, sizeof(buff), stdin);
}
return (0);
}
