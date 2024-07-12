#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2D array.
 * @width: variable
 * @height: variable
 * *Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (!t[i])
		{
			for (; j <= i; j++)
			free(t[j]);
			free(t);
		}
		for (j = 0; j < width; j++)
		t[i][j] = 0;
	}
	return (t);
}
