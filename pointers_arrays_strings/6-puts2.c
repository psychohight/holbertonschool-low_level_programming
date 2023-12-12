#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - 1sur2
* @str: char
* Return: Always 0.
*/

void puts2(char *str)
{
	int put;

	for (put = 0; str[put] != '\0'; put++)
	{
		if (put % 2 == 0)
			_putchar(str[put]);
	}
	_putchar('\n');
}
