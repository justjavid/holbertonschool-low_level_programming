#include "main.h"
#include <stddef.h>

/**
 *  *_strchr - returns piece of string after the character.
 *   *@s: variable
 *    *@c: string
 *     *Return: string after given character
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (*(s + count) != 0)
	{
		if (*(s + count) == c)
		{
			return (s + count);
		}
		count++;
	}
	if (c == '\0')
	return (s + count);
	return (NULL);
}
