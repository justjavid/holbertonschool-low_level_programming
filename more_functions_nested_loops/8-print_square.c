#include "main.h"
/**
 * print_square - Main entry
 * @size: variable
 * Return: Printing square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
