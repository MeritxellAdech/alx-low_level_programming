#include "main.h"

/**
 * free_grid - frees memory used by grid
 *
 * @grid: The grid to be freed
 * @height: The rows in the grid
 *
 **/
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
