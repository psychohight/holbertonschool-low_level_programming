#include "main.h"

/**
 * islower - 1 si minuscule
 *
 * Return 1 ou 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
