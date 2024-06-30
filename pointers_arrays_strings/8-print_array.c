#include "main.h"
#include <stdio.h>

/**
 *  * print_array - Main entry
 *   * @a: pointer
 *    * @n: variable
 *     * Return: prints n elements of the array
 */
void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
		if ((n - m) == 1)
		{
			printf("%d", *(a + m));
		}
		else
		{
		printf("%d, ", *(a + m));
		}
		m++;
	}
	putchar('\n');
}
