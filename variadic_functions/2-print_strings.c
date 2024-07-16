#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints given strings with seperator
 * @separator: seperator
 * @n: count of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list array;
	unsigned int i;
	char *temp;

	va_start(array, n);

	for (i = 0; i < n ; i++)
	{
		temp = va_arg(array, char *);
		if (separator == NULL || i == n - 1)
		{
			if (temp == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", temp);
			continue;
		}
		if (temp == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s%s", temp, separator);
	}
	va_end(array);
	printf("\n");
}
