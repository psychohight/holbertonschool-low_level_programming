#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - renverse.
 * @a: nbr
 * @n: nbr.
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (x = n - 1; x >= n / 2; x--)
	{
		i = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = i;
	}
}
