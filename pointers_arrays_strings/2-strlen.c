#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
    int i = 0;

    while (*(s + i) != '\0')
        i++;

    return i;
}