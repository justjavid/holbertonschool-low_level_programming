#include "main.h"
#include <stdlib.h>

/**
 * array_range - creating array with malloc in range.
 * @min: min of array
 * @max: max of array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *t;
	int j;
	int i = 0;

	if (min > max)
		return (NULL);
	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);
	j = min;
	for (; i < max - min + 1; i++)
	{
		t[i] = j;
		j++;
	}
	return (t);
}
