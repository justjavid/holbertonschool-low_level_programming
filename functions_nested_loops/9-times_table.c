#include "main.h"
/**
 * _2digit - printing 2 digit number with putchar
 *  @n: number
 *  Return: nothing
 */
void _2digit(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 *  _1digit - printing 1 digit number with putchar.
 *  @n: number
 *  Return: nothing
 */
void _1digit(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + n);
}

/**
 *  times_table - printing "vurma cedveli"
 *  Return: nothing
 */
void times_table(void)
{
	int n = 0;
	int i;
	int j;

	_putchar('0' + 0);
	for (i = 1; i < 10; i++)
	_1digit(0);
	_putchar('\n');
	for (i = 1; i < 10; i++)
	{
		_putchar('0' + 0);
		n = 0;
		j = 1;
		while (j <= 9)
		{
			n += i;
			if (n < 10)
			_1digit(n);
			else
			_2digit(n);
			if (j == 9)
			{
				_putchar('\n');
			}
			j++;
		}
	}
}
