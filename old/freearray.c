#include "shell.h"

void freearray2D(char **arr)
{
    int i;
    if(!arr)
    {
        return;
    }
    for(i = 0; arr[i]; i++ )
        {
            printf("%s\n", arr[i]);
            free(arr[i]);
            arr[i] = NULL;
        }
     free(arr), arr = NULL;
}