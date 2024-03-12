#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
        i++;

    for (i = i / 2; str[i] != '\0'; i++)
        _putchar(str[i]);

    _putchar('\n');
}