#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i > 4)
            _putchar(str[i]);

        i++;
    }
    _putchar('\n');
}