/**
 * _getenv - function to get an environment variable's value
 * @name: the environment variable for which you want the value
 * Return: the value of the environment variable that you pass in
*/
#include "shell.h"

char *_getenv(const char *name)
{
extern char **environ;/*with this we access all the environment variable in our code*/
int i;
char *token;
char *value;
i = 0;
while(environ[i] != NULL)/*while checking through all our environment variables*/
{
token = strtok(environ[i], "=");/*tokenize each environ*/
if(_strcmp(token, name) == 0)/*if strcmp(token, name) == 0 */
{
value = strtok(NULL, "=");
/*let tokenize to get the second string (the value) the value after the delim */
}
i++;
}
return(value);
}

/*void main(void)
{
    char *homevalue = _getenv("OLDPWD");
    printf("%s\n",homevalue);
}*/