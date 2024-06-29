#include "main.h"
/**
 * print_rev - Main entry
 * @s: variable
 * Return: nothing
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != 0)
	{
		count++;
	}
	count = count - 1;
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
