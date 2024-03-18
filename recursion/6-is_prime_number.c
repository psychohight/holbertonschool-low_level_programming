#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int division(int num, int div)
{
    if (num % div == 0)
        return (0);

    if (div > (num / 2))
        return (1);

    return (division(num, div + 1));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);

    return (division(n, 2));
}