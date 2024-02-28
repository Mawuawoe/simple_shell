/**
 * tokenize - function for tokenization
 * @buff: pointer to the string to be tokenized
 * @av: argument vector
 * Return: an int
*/
#include "shell.h"
int tokenize(char *buff, char **av)
{
struct stat st;
char *argvec[10];/*an array of strings to store all our tokens*/
char *delim = " ";
char *token;
int i = 1;
int file_exist;
token = strtok(buff, delim);/*token frist stores the output from strtok*/
argvec[0] = token;/*storing the first token at index 0*/
while (token != NULL)
{
token = strtok(NULL, delim);/*call to strtok repeated till NULL*/
argvec[i++] = token;/*stores the token after each call in array of strings*/
}
argvec[i] = NULL;/*set the end of the array to NULL*/
file_exist = stat(argvec[0], &st);
if (file_exist == 0)
{
excute(argvec, av);
}
else
{
/*concatinate_strings();*/
}
return (i);
}
