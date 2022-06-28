#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free entire aray grid.
 * @grid: array.
 * @height: colomun length.
 *
 * Return: pointer of an array of chars
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}

