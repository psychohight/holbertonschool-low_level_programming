#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 *
 * @str : nbr
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = (char *)malloc(len + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}

