#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything that given.
 * @format: list of types of arguments passed into.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list arr;
	unsigned long int i = 0;
	char *str;

	va_start(arr, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arr, int));
				break;
			case 'i':
				printf("%d", va_arg(arr, int));
				break;
			case 'f':
				printf("%f", va_arg(arr, double));
				break;
			case 's':
				str = va_arg(arr, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (i != strlen(format) - 1)
		{
			printf(", ");
			i++;
			continue;
		}
		i++;
	}
	va_end(arr), printf("\n");
}
