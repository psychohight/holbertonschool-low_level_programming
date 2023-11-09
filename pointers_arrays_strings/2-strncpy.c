#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - fusion
 *
 * @a: chaine
 * @n: nbr
 * @dest: pt
 * @src: pt
 *
 * return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		if (a < n)
			dest[a] = src[a];

	while (a < n)
		dest[a++] = '\0';

	return (dest);
}
