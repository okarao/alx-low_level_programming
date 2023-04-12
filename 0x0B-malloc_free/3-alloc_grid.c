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
	int *grid, i;
	
	grid = malloc((width * height) * sizeof(int));
	for (i = 0; i < width * height; i++)
	{
		grid[i] = 0;
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	return (grid);
}
