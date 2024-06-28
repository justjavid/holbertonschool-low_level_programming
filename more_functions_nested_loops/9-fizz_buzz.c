#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints numbers from 1 to 100.
 * For multiples of 3, it prints
 * "Fizz". For multiples of 5, it prints "Buzz".
 * For numbers which are multiples
 * of both 3 and 5, it prints "FizzBuzz".
 * Otherwise, it prints the number itself.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
