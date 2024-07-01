#include "main.h"
#include <stddef.h>

/**
 *  *_strchr - returns piece of string after the character.
 *   *@s: variable
 *    *@c: string
 *     *Return: string after given character
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
