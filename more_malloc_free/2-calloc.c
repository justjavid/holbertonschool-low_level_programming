#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: count of elements
 * @size: size of data type
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	t[i] = 0;
	return (t);
}
