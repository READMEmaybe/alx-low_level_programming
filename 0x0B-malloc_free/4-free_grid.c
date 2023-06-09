#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimendional grid
 * @grid: the grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
