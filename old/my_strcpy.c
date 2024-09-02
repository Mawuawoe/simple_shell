#include "shell.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes
 * @dest: buffer storing the string copy
 * @src: the source string
 * Return: returns
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;
	while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

/*int main (void)
{
    char *src = "this the girl I saw";
    char dest[strlen(src)];
    _strcpy(dest, src);
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    return(0);
}*/
