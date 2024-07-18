#include "main.h"

/**
 * print_last_digit - last digit of given number
 * @n: variable
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	r = -r;
	_putchar('0' + r);
	return (r);
}
