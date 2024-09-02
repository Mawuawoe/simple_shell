#include "shell.h"

int main (int ac, char **argv)
{
    struct stat st;
    char *value_of_key = NULL;
    char *token = NULL;
    char fullpath[100];
    int flag = 0;
    value_of_key = _getenv("PATH");
    printf("%s\n", value_of_key);

    token = strtok(value_of_key, ":");
    do{
        _strcpy(fullpath, token);
        printf("Fullpath is %s\n", fullpath);

        _strcat(fullpath, "/");
        printf("fullpath is %s\n", fullpath);

        _strcat(fullpath, argv[1]);
        printf("fullpath is %s\n", fullpath);

        if(stat(fullpath, &st) == 0)
        {
            printf("%s found\n", fullpath);
            flag = 1;
            return(0);
        }
        token = strtok(NULL, ":");
    } while (token != NULL);
    if (flag == 0)
    {
        printf("%s :not found\n", fullpath);
         return(1);
    }
}