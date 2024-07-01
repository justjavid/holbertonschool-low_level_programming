#include "main.h"
#include <stddef.h>

/**
 *  *_strstr - returns pointer that substring starts.
 *   *@haystack: pointer
 *    *@needle: pointer
 *     *Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int count1 = 0;
	int count2 = 0;
	int j;

	while (*(needle + count1) != 0)
	{
		count1++;
	}
	while (*(haystack + count2) != 0)
	{
		j = 0;
		while ((*(haystack + count2 + j) == *(needle + j)) && (j < count1))
		{
			if (j == count1 - 1)
			return (haystack + count2);
			j++;
		}
		count2++;
	}
	if (*needle == '\0')
	return (haystack);
	return (NULL);
}
