#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything that given.
 * @n: count of numbers
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list arr;
	int i = 0;
	int j;
	char args[] = "cifs";

	va_start(arr, format);

	while (format[i] != '\0')
	{
		j = 0;
		while(args[j] != '\0' && format[i] != args[j])
		{
			j++;
		}
	}
	va_end(arr);
	printf("\n");
}
