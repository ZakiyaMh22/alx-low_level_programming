#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-dimensional grid
 * @grid: pointer to the 2-dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

