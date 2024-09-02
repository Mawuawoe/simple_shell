#include "shell.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: return poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
    int src_len = 0;
    int i ;
    int j ;
    int a;
    

	for(i = 0; dest[i] != '\0'; i++)
    {
        dest_len++;
    }
    /*printf("%d\n", i);*/
    for(j = 0; src[j] != '\0'; j++)
    {
        src_len++;
    }
    for(a = 0; a <= src_len; a++)
    {
        dest[dest_len + a] = src[a];
    }
	return (dest);
}

/*int main (void)
{
    char dest[98] = "the";
    char *src = "add";
    char *cat = _strcat(dest, src);
    printf("%s\n", cat);
    return(0);
}*/