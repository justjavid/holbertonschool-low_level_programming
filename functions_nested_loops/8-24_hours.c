#include "main.h"
/**
 *  jack_bauer - prints every minute of the day.
 *  Return: nothing
 */

void jack_bauer(void)
{
	int i = 0;
	int j;
	int n;
	int m;

	while (i < 3)
	{
		j = 0;
		while (j < 10)
		{
			if (i == 2 && j == 4)
				break;
			n = 0;
			while (n < 6)
			{
				m = 0;
				while (m < 10)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + n);
					_putchar('0' + m);
					_putchar('\n');
					m++;
				}
				n++;
			}
			j++;
		}
		i++;
	}
}
