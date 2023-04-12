#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width : first array
 * @height : 2nd array
 *
 * Return: NULL on failure or pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		grid[i] = calloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
						}
						free(grid);
						return (NULL);
						}
						}
						return (grid);
						}
