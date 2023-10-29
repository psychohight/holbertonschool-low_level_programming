#include "main.h"
#include <stdio.h>

/**
 *  * _strchr - loca.
 *   * @s: char
 *    * @c: char
 *     *
 *      * Return: c / s / NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
