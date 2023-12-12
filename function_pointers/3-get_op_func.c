#include "3-calc.h"

/**
 * op_add: ...
 * @op_sub: sub
 * @op_mul: multi
 * @op_div: divi
 * @op_mod: modu
 * @a: nbr
 * @b: nbr
 * Return: Always 0.
 */

int op_add(int a, int b)
	return (a + b);

int op_sub(int a, int b)
	return (a - b);

int op_mul(int a, int b)
	return (a * b);

int op_div(int a, int b)
{
	if (b == 0)
	exit(100);
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	exit(100);
	return (a & b);
}

