#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}