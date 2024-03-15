#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;
 
    while (dest[i++])
        j++;
    
    for (i = 0; src[i] != '\0'; i++)
        dest[j++] = src[i];

    return(dest);
}