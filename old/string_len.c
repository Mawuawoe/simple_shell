/**
 * _strlen - function that calculate string length
 * @str: given string
 * Return: the length of string
*/
#include"shell.h"

int _strlen(char *str)
{
int i = 0;
int len = 0;
while (str[i] != '\0')
{
len++;
i++;
}
return (len);
}
