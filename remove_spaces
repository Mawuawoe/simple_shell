#include"shell.h"
/**
 * remove_spaces - function to remove spaces
 * @str: string to work on
 * Return: string that have been worked on
*/
char *remove_spaces(char *str)
{
char trim_from_B[100];
char *trim_end = malloc(sizeof(char) * 100);
int i = 0;
int a = 0;
while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
{
i++;
}
while (str[i] != '\0')
{
trim_from_B[a] = str[i];
a++;
i++;
}
i = 0;
a = 0;
while (trim_from_B[a] != '\0')
{
if (trim_from_B[a] == ' ' || trim_from_B[a] == '\t')
{
break;
}
a++;
}
while (i < a)
{
trim_end[i] = trim_from_B[i];
i++;
}
trim_end[i] = '\0';
return (trim_end);
}
