#include "main.h"

/**
 * print_last_digit - imprime le dernier chiffre
 *
 * @n: nmbr
 *
 * Return: dernier chiffre
 */

int print_last_digit(int n)
{
	int print_last = n % 10;

	if (print_last < 0)
		print_last = print_last * -1;

	_putchar(print_last + '0');

	return (print_last);
}
