#include "main.h"

/**
 * free_grid - frees a tw dimensional grid created by the alloc_grid
 * @grid: two dimensional array
 * @height: int arg
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
