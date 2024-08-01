#include "main.h"

/**
 *  print_binary - prints binary representation of n.
 *  @n: given number
 *  Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int prod = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n >= prod * 2 && prod * 2 <= ULONG_MAX)
		prod *= 2;
	while (prod)
	{
		if (n >= prod)
		{
			_putchar('1');
			n = n - prod;
		}
		else 
			_putchar('0');
		prod = prod >> 1;
	}
}
