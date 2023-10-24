#include "main.h"
#include <string.h>

/**
 * _strlen - afficher le nbr de charactere
 * @s: char
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++);

	return (len);

}
