/**
 * tokenize - function for tokenization
 * @buff: pointer to the string to be tokenized
 * @av: argument vector
 * Return: an int
*/
#include "shell.h"
int tokenize(char *buff, char **av)
{
/*int a;*/
/*char *argvec[10];an array of strings to store all our tokens*/
/*char *delim = " \n\t";*/
char *token;
/*int i = 1;*/
(void) av;
token = strtok(buff, "\t\n");/*token frist stores the output from strtok*/
/*argvec[0] = token;storing the first token at index 0*/
while (token != NULL)
{
printf("%s\n",token);
token = strtok(NULL, "\t\n");/*call to strtok repeated till NULL*/
/*argvec[i++] = token;stores the token after each call in array of strings*/
}
/*argvec[i] = NULL;set the end of the array to NULL*/
/*a = 0;*/
/*while(argvec[a] != NULL)
{
    printf("%s\n",argvec[a]);
    a++;
}*/
/*excute(argvec, av);*/
return (0);
}
