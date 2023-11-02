#include "main.h"
#include <stdio.h>

/**
 * racine - check the code
 * @n: nbr
 * @a: nbr
 * Return: Always 0.
 */
int racine(int n, int a)
{
	if (n < 0)
		return (-1);

	if (a * a == n)
		return (a);

	if (a * a > n)
		return (-1);

	return (racine(n, a + 1));
}

/**
 * _sqrt_recursion - check the code
 * @n: nbr
 * return: n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (racine(n, 1));
}
