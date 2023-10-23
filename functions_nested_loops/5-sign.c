#include "main.h"

/**
 * _sign - return (1&+)>0 | return (0&0)=0 | return (-1&-)<0
 *@n: nombre
 *
 * return: 1 ou 0 ou -1
 */

int print_sign(int n)
{
	
	if (n > 0)
	{	
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{	
		return (0);
		_putchar('0');
	}
	else
	{	
		return (-1);
		_putchar('-');
	}
}
