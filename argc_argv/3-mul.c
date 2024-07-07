#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Main Entry
 *  @argc: variable that count things in command line.
 *  @argv: array of pointers to those strings.
 *  *Return: Success point 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int prod;

	prod = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		prod = prod * atoi(argv[i]);
	}
	printf("%d\n", prod);
	return (0);
}
