#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freed 2D array
 * @grid: pointer to 2D array
 * @height: variable
 * *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
