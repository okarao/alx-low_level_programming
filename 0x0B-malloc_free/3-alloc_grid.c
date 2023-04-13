#include "main.h"

/**
 * alloc_grid - print a two by two array
 * @width: number of collumns
 * @height: number of rows
 *
 * Return: pointer to array or zero
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(height * sizeof(int));
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
