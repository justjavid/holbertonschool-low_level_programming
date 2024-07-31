#include "main.h"

/**
 *  binary_to_uint - converts a binary number to unsigned int
 *  @b: pointer to string of 0 and 1 chars
 *  Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;
	unsigned int prod = 1;

	if (!b)
		return (0);
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] == '0')
		{
			prod *= 2;
			i--;
		}
		else if (b[i] == '1')
		{
			n += prod;
			prod *= 2;
			i--;
		}
		else
			return (0);
	}
	return (n);
}
