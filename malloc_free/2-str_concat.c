/**
 *  str_concat - returns a pointer to concatted  string.
 *  @s1: pointer to s1
 *  @s2: pointer to s2
 *  *Return: pointer to concatted string
 */

#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (*(s1 + i) != 0)
	{
		i++;
	}
	while (*(s2 + j) != 0)
	{
		j++;
	}
	t = malloc(sizeof(char) * (i + j + 1));
	i = 0;
	j = 0;
	while (*(s1 + i) != 0)
	{
		t[i] = s1[i];
		i++;
	}
	while (*(s2 + j) != 0)
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	if (t == NULL)
	{
		return (NULL);
	}
	return (t);
}
