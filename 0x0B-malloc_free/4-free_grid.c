#include "main.h"
/**
 * free_grid - free the 2d array
 * @grid: pointer to pointer array
 * @height: number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
