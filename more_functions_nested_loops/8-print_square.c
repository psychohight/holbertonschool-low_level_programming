#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_square(int size)
{
    int i;
    int j;

    if (size > 0)

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            _putchar('#');
           
        _putchar('\n');
    }

    if (size <= 0)
        _putchar('\n');
}   