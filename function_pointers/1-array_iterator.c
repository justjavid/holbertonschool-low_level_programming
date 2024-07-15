#include "function_pointers.h"
#include <stddef.h>

/**
 *  array_iterator - execute function for array element
 *  @array: given array
 *  @size: size of array
 *  @action: function that we need
 *  *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
