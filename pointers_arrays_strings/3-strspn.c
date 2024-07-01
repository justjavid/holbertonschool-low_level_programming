#include "main.h"

/**
 *  *_strspn - returns integer
 *   *@s: pointer
 *    *@accept: pointer
 *     *Return: count characters initial segment
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
