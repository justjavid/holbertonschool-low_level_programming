#include "main.h"
/**
 * swap_int - Main entry
 * @a: variable
 * @b: variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
