#include "main.h"
#include <string.h>

/**
* print_rev - imprimer a l'envers
*
* @s: mot
*
* Return: Always 0.
*/

void print_rev(char *s)

{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (len = len - 1; s[len] != '\0'; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');

}
