#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D integer grid using malloc.
 * Description: Each element of the grid is initialized to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the new grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
