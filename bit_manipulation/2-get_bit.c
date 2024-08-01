#include "main.h"

/**
 *  get_bit - returns the value of a bit at a given index.
 *  @n: given number
 *  @index: index
 *  Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	while (n)
	{
		if (i == index)
			return (n % 2);
		n = n / 2;
		i++;
	}
	return (-1);
}
