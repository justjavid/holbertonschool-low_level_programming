#include "main.h"

/**
 *  *_memcpy - reverses the content of an array of integers.
 *   *@dest: variable
 *    *@src: variable
 *    *@n: size
 *     *Return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char const *p = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(p + i);
	}
	return (dest);
}
