#include "shell.h"

char *handle_path (char *cmd)
{
    struct stat st;
    char *value_of_key = NULL;
    char *token = NULL;
    int i;
    char *fullpath = malloc(sizeof(char) * 100);
    value_of_key = _getenv("PATH");
    /*printf("%s\n", value_of_key);*/

    for(i = 0; cmd[i]; i++)
    {
        if(cmd[i] == '/')
        {
            if(stat(cmd, &st) == 0)
            {
                free(fullpath);
                return(cmd);
            }
            return(NULL);
        }
    }
    

    token = strtok(value_of_key, ":");
    while (token != NULL)
    {
        _strcpy(fullpath, token);
       /*printf("Fullpath is %s\n", fullpath);*/

        _strcat(fullpath, "/");
       /*printf("fullpath is %s\n", fullpath);*/

        _strcat(fullpath, cmd);
       /*printf("fullpath is %s\n", fullpath);*/

        if(stat(fullpath, &st) == 0)
        {
            /*printf("%s found\n", fullpath);*/
            return(fullpath);
        }
        else
        {
            fflush(stdout);
            
            /*printf("%s :not found\n", fullpath);*/
        }
        token = strtok(NULL, ":");
        
    }
    free(fullpath);
    return(NULL);
}