#include "main.h"

/**
 *  *_memset - reverses the content of an array of integers.
 *   *@s: variable
 *    *@b: constant
 *    *@n: variable
 *     *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char const *p = &b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = *p;
	}
	return (s);
}
