#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: 2 dimensional
 * @height: of the dimension
 *
 * Return: dimension
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
