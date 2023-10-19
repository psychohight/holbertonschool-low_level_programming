#include "main.h"

/**
 * _islower - 1 si minuscule
 * #c: char check
 *
 * Return: 1 ou 0
 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
