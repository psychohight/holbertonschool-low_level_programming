#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
    int i;

    for (i = 1; i < n; i++)
        _putchar('_');

    _putchar('\n');
}