#include "main.h"
/**
 * rev_string - Main entry
 * @s: variable
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	j = i - 1;
	i = 0;
	while (j > i)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		j--;
		i++;
	}
}
