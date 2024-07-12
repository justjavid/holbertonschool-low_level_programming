/**
 *  _strdup - returns a pointer to duplicated string.
 *  @str: pointer
 *  *Return: pointer to duplicated string
 */
#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	char *t;
	int len = 0;
	int i = 0;

	while (*(str + len) != 0)
	{
		len += 1;
	}
	t = malloc(sizeof(char) * len);
	if (t == NULL || *str  == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		t[i] = str[i];
		i++;
	}
	return (t);
}
