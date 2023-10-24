#include "main.h"
#include <string.h>
/**
* _puts - afficher le nbr de charactere
* @str: char
* Return: Always 0.
*/

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}

	_putchar('\n');

}

