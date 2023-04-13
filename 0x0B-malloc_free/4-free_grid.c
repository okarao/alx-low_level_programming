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
	int count;

	for (count = 0; count < height, count++)
	{
		free(grid[count]);
	}
	free(grid);
}
