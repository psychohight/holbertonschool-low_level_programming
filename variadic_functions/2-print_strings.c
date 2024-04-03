#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list strings;
    unsigned int i;
    char *str;

    va_start(strings, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(strings, char*);
        if (str != NULL)
            printf("%s", str);
        else
            printf("(nil)");

        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }

    va_end(strings);

    printf("\n");
}