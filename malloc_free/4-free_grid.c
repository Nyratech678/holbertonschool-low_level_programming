#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Double pointer to the 2D grid.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
