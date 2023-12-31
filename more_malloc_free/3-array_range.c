#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;
	
	if (min > max) 
		return NULL;

	size = max - min + 1;
	
	arr = malloc(size * sizeof(int));
	
	if (arr == NULL)	
		return NULL;

	for (i = 0; i < size; i++) arr[i] = min++;

	return arr;
}
