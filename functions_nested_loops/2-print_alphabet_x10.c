#include "main.h"

/**
 * main - check the code
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
