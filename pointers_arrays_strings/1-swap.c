#include "main.h"
#include <stdio.h>

/**
 * swap_int - inverser nbr
 *
 * @a: nbr
 * @b: nbr
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;
		
	n = *b;
	*b = *a;
	*a = n;
}
