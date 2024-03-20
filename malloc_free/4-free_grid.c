#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
    int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}