#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - reverse
* @s: char
* Return: Always 0.
*/

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int millieu = len / 2;
	char temp;

	for (i = 0; i < millieu; i++)

	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
