#include "main.h"
#include "2-get_bit.c"

/**
 *  *_pow - returns x pow y with recursion.
 *  *@x: given number
 *  *@y: pow number
 *  *Return: power of given numbe
 */
int _pow(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}

/**
 *  set_bit - sets the value of a bit to 1 at a given index.
 *  @n: address of given number
 *  @index: index
 *  Return: 1 if it worked, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (get_bit(*n, index) == 0)
		*n = *n + _pow(2, index);
	return (1);
}
