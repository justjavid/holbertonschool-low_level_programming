#include "main.h"
/**
 * puts2 - Main entry
 * @str: variable
 * Return: nothing
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != 0)
	{
		_putchar(*(str + count));
		count = count + 2;
	}
	_putchar('\n');
}
