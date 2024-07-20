#include "main.h"

/**
 *  printnumber - prinst integer with putchar
 *  @n: given integer
 *  Return: nothing
 */
void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0' + 0);
		return;
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
/**
 *  print_to_98 - prinst integers from n to 98.
 *  @n: given integer
 *  Return: nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printnumber(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	printnumber(98);
	_putchar('\n');
}
