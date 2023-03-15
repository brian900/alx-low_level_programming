#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @height: height of the array
 * @grid: 2 dimensional array
 * Return: empty
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
