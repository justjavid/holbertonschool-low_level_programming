#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * op_add - function
 * @a: variable
 * @b: variable
 * Return: add a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/*
 * op_sub - function
 * @a: variable
 * @b: variable
 * Return: substraction a to b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/*
 * op_mul - function
 * @a: variable
 * @b: variable
 * Return: product a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/*
 * op_div - function
 * @a: variable
 * @b: variable
 * Return: division a from b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/*
 * op_mod - function
 * @a: variable
 * @b: variable
 * Return: mod a to b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
