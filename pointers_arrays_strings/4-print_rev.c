#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

    while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}