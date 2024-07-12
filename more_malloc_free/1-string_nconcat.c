/**
 *  string_nconcat - returns a pointer to concatted  string.
 *  @s1: pointer to s1
 *  @s2: pointer to s2
 *  @n: first n bytes of s2 that concatted
 *  *Return: pointer to concatted string
 */

#include "main.h"
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != 0)
	{
		i++;
	}
	t = malloc(sizeof(char) * (i + n + 1));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != 0)
	{
		t[i] = s1[i];
		i++;
	}
	while (*(s2 + j) != 0 && j < n)
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}
