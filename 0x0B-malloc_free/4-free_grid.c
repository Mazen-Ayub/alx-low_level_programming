#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees the memory allocate
 * @grid: the multidimensional array of integers will be freed
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
	{
			free(grid[height]);
		}
	free(grid);
	}
}
