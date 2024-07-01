#include "main.h"
#include <stddef.h>

/**
 *  *_strpbrk - returns piece of string after the character.
 *   *@s: pointer
 *    *@accept: pointer
 *     *Return: string after character
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int i;

	while (*(s + count) != 0)
	{
		i = 0;
		while (*(accept + i) != 0)
		{
			if (*(s + count) == *(accept + i))
			return (s + count);
			i++;
		}
		count++;
	}
	return (NULL);
}
