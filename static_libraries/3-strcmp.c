#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compare
 *
 * @i: int
 * @s1: chaine
 * @s2: chaine
 *
 * return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
