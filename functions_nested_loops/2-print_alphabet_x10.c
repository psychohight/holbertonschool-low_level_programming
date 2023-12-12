#include "main.h"

/**
 * print_alphabet_x10 - alphabet x 10
 *
 * return: always 0.
 */

void print_alphabet_x10(void)
{
	int alph, x;

	x = 0;

	while (x < 10)
	{
		x++;

		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar (alph);
		_putchar('\n');
	}
}
