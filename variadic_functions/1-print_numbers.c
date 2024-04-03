#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list nums;
    unsigned int i;

    va_start(nums, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(nums, int));
        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }

    va_end(nums);

    printf("\n");
}