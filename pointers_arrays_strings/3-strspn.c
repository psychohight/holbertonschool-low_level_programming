#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
    int i;
    unsigned int bytes = 0;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                bytes++;
                break;
            }

            else if (accept[i + 1] == '\0')
                return (bytes);
        }
        s++;
    }
    return (bytes);
}