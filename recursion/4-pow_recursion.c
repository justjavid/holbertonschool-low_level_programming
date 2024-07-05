#include "main.h"

/**
 *  *_pow_recursion - returns x pow y with recursion.
 *  *@x: given number
 *  *@y: pow number
 *  *Return: power of given numbe
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
