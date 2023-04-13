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

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return NULL;
		}
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
