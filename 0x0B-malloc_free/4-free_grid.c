#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: parameters for 2d grid
 * @height: parameters for grid height dimension
 * Return: Always 0 (success)
 */
void free_grid(int **grid, int height)
{
	/*introducing the variable*/
	int x;

	for (x = 0; x < height; x++)
	{
		/*frees grid previously created alloc_grid function.*/
		free(grid[x]);
	}
	free(grid);
}
