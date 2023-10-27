#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - fusion
 *
 * @d: chaine
 * @s: chaine
 *
 * return: 0
 */

char *_strcat(char *dest, char *src)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
	{
	}
	for (s = 0; src[s] != '\0'; s++)
	{
		dest[d] = src[s];
		d++;
	}

	return (dest);
}
