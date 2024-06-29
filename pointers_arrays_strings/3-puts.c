#include "main.h"
/**
 * _puts - Main entry
 * @str: variable
 * Return: nothing
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != 0)
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
