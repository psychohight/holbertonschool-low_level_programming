#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @i: height_i
 * @j: width_i
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
    int **twoD;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(sizeof(int) * width);

		if (twoD[i] == NULL)
		{
			for (; i >= 0; i--)
				free(twoD[i]);

			free(twoD);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			twoD[i][j] = 0;
	}

	return (twoD);
}