#include "main.h"

/**
 *  *check_prime - check if number is prime.
 *  *@i: iteration
 *  *@n: given number
 *  *Return: if number is prime, returns 1, otherwise returns 0.
 */
int check_prime(int i, int n)
{
	if (n % i != 0)
		return (check_prime(i + 1, n));
	else if (i == n)
		return (1);
	return (0);
}
/**
 *  *is_prime_number - calls last function.
 *  *@n: given number
 *  *Return: if number is prime, returns 1, otherwise returns 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(2, n));
}
