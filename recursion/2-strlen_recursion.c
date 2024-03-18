#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
    int len = 0;

    if (*s)
    {
        len++;
        len += _strlen_recursion(s + 1);
    }
    return (len);
}