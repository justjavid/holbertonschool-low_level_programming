#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints given numbers with seperator
 * @separator: seperator
 * @n: count of numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list array;
	unsigned int i;

	va_start(array, n);

	for (i = 0; i < n ; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%d", va_arg(array, int));
			continue;
		}
		printf("%d%s", va_arg(array, int), separator);
	}
	va_end(array);
	printf("\n");
}
