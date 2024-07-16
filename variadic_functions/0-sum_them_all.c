#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of given numbers
 * @n: count of numbers
 * Return: sum of n numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list array;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(array, n);

	for (i = 0; i < n ; i++)
	{
		sum += va_arg(array, int);
	}

	va_end(array);

	return (sum);
}
