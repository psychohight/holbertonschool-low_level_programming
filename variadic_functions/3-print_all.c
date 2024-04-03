#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list args) { printf("%c", va_arg(args, int)); }
void print_int(va_list args) { printf("%d", va_arg(args, int)); }
void print_float(va_list args) { printf("%f", va_arg(args, double)); }
void print_string(va_list args)
{
    char *str = va_arg(args, char *);
    if (!str)
        str = "(nil)";
    printf("%s", str);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int j, i = 0;
    char *separator = "";
    char types[] = "cifs";

    void (*functions[])(va_list) = {
        print_char,
        print_int,
        print_float,
        print_string
    };

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;

        while (types[j])
        {
            if (format[i] == types[j])
            {
                printf("%s", separator);
                functions[j](args);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}