#include "main.h"
/**
 * print_diagonal - Main entry
 * @n: variable
 * Return: Printing diagonal like pyramid
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int d;

		for (i = 1; i <= n; i++)
		{
			for (d = i; d > 1; d--)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
