#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* *_strcpy - copier 
* @*dest: chaine
* @*src: chaine 
* Return: cpy
*/
char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpy);
}
