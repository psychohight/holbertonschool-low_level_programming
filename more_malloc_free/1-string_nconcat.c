#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) 
{
	unsigned int len1 = 0, len2 = 0;
	char *result, *p;
	unsigned int i;
	
	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	while (s1[len1] != '\0') len1++;
	while (s2[len2] != '\0') len2++;

	if (n >= len2) n = len2;

	result = (char *)malloc((len1 + n + 1) * sizeof(char));
	
	if (result == NULL) 
		return NULL;

	p = result;
	
	while (*s1 != '\0') *p++ = *s1++;

	for (i = 0; i < n; i++) *p++ = *s2++;

	*p = '\0';

	return result;
}
