#include "main.h"
/**
 * more_numbers - Main entry
 *
 * Return: Printing numbers till 14
 */
void more_numbers(void)
{
	int i;
	int v = 0;

	while (v < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar('1');
			_putchar('0' + (i % 10));
		}
		v++;
		_putchar('\n');


	}
}
