#include "main.h"

/**
 *  *_strchr - returns piece of string after the character.
 *   *@s: variable
 *    *@c: string
 *     *Return: string after given character
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;
	unsigned int a = 0;

	while (*(s + count) != ' ')
	{
		i = 0;
		while (*(accept + i) != 0)
		{	
			if (*(s + count) == *(accept + i))
			a++;
			i++;
		}
		count++;
	}
	return (a);
}
