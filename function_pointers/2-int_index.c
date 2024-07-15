#include "function_pointers.h"

/**
 *  int_index - the index of the first element for
 *  which the cmp function does not return 0.
 *  @array: given array
 *  @size: size of array
 *  @cmp: function that compare values
 *  Return: first index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
