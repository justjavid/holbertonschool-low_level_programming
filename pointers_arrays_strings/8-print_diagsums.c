#include  <stdio.h>
#include "main.h"

/**
 *  print_diagsums - print sum of matrix left and right diagonal .
 *  @a: pointer
 *  @size: matrix size
 *  *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumleft = 0;
	int sumright = 0;
	int *p = a;

	for (i = 0; i < size * size;)
	{
		sumleft = sumleft + p[i];
		i = i + (size + 1);
	}
	i = size - 1;
	for (; i < size * size - 2;)
	{
		sumright = sumright + p[i];
		i = i + (size - 1);
	}
	printf("%d, %d\n", sumleft, sumright);
}
