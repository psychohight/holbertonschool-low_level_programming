#include "main.h"

/**
* main - print alphabet  x10
*
* Return: Always c.
*/
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
        for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

	    _putchar('\n');
    }
}
    
