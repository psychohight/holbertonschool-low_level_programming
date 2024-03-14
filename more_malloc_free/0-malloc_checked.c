#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
    void *val = malloc(b);

	if (val == NULL)
		exit(98);
	
    return (val);
}