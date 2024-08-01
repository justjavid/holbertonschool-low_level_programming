#include "main.h"
#include "2-get_bit.c"

/**
 *  flip_bits - returns the number of bits
 *  you would need to flip to get from one number to another.
 *  @n: given number
 *  @m: given number
 *  Return: count of bits need flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int flip = 0;

	while (i < 64)
	{
		if (get_bit(n, i) != get_bit(m, i))
			flip++;
		i++;
	}
	return (flip);
}
