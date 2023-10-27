#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - fusion
 *
 * @a: chaine
 * @b: chaine
 * @dest: pt
 * @src: pt
 * @n: nbr
 * return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}
	return (dest);
}
