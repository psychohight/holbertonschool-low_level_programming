#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
    int tmp, i;

    for (i = n - 1; i >= n / 2; i--)
    {
        tmp = a[n - 1 - i];
        a[n - 1 - i] = a[i];
        a[i] = tmp;
    }
}