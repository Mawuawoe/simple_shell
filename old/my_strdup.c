#include "shell.h"

char *_strdup(const char *str)
{
    char *ptr;
    int i;
    int a = 0;
    int len = 0;

    if (str == NULL)
    {
        return(NULL);
    }
    len = _strlen(str);

    ptr = malloc(sizeof(char) * (len + 1));
    if(ptr == NULL)
    {
        return(NULL);
    }
    for(i = 0; i <= len; i++)
    {
        ptr[i] = str[i];
    }
    return(ptr);
}