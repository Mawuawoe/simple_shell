#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * trim(char *str)
{
    char trim_from_B[100];
    char *trim_end = malloc(sizeof(char) * 100);
    int i = 0;
    int a = 0;
    while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
    {
        i++;
    }

    while(str[i] != '\0')
    {
        trim_from_B[a] = str[i];
        a++;
        i++;
    }
   
    i = 0;
    a = 0;
    while(trim_from_B[a] != '\0')
    {
        if(trim_from_B[a] == ' ' || trim_from_B[a] == '\t')
        {
            break;
        }
         a++;
    }
    while(i < a)
    {
        trim_end[i] = trim_from_B[i];
        i++;
    }
    return(trim_end);
}

int main (void)
{
    char str[] = "        deadass        ";
    char *start = trim(str);
    printf("the trimed string is: %s\n", start);
    free(start);
    start = NULL;
    return(0);
}