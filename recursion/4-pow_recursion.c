#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @x: number
 * @y: puissance
 * 
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
    int num = x;

    if (y < 0)
        return (-1);

    else if (y == 0)
        return (1);

    num *= _pow_recursion(x, y - 1);

    return (num);
}