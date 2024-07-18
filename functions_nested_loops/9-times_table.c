#include "main.h"
/**
 * _2digit - printing 2 digit number with putchar
 *  @n: number
 *  Return: nothing
 */
void _2digit(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(',');
	_putchar(' ');
}

/**
 *  _1digit - printing 1 digit number with putchar.
 *  @n: number
 *  Return: nothing
 */
void _1digit(int n)
{
	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
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

	for (i = 1; i < 10; i++)
	_1digit(0);
	_putchar(0 + '0');
	_putchar('\n');
	for (i = 1; i < 10; i++)
	{
		n = 0;
		j = 1;
		while (j <= 10)
		{
			if (j == 10 && (n / 10) > 0)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
				_putchar('\n');
				j++;
				continue;
			}
			else if (j == 10 && (n / 10) == 0)
			{
				_putchar('0' + n);
				_putchar('\n');
				j++;
				continue;
			}
			if (n < 10)
			_1digit(n);
			else
			_2digit(n);
			n += i;
			j++;
		}
	}
}
