#include "main.h"

/**
 *  *sqrt_find - check if number has square root.
 *  *@i: iteration
 *  *@n: given number
 *  *Return: square root of number
 */
int sqrt_find(int i, int n)
{
	if (i * i == n)
	return (i);
	else if (i * i > n)
	return (-1);
	return (sqrt_find(i + 1, n));
}
/**
 *  *_sqrt_recursion - calls last function.
 *  *@n: given number
 *  *Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_find(1, n));
}
