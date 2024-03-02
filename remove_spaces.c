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
int q = 0;
int k = 0;
int len;
while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
{
i++;
}
len = strlen(str);
if (i == len)
{
    return(NULL);
}
while (str[i] != '\0')
{
trim_from_B[a] = str[i];
a++;
i++;
}
trim_from_B[a] = '\0';
while (trim_from_B[q] != '\0')
{
if (trim_from_B[q] == ' ' || trim_from_B[q] == '\t')
{
break;
}
q++;
}
while (k < q)
{
trim_end[k] = trim_from_B[k];
k++;
}
trim_end[k] = '\0';
return (trim_end);
}
