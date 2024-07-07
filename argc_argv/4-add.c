#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  main - Main Entry
 *  @argc: variable that count things in command line.
 *  @argv: array of pointers to those strings.
 *  *Return: Success point 0.
 */
int main(int argc, char *argv[])
{
	int i, sum, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		continue;
		j = 0;
		while (argv[i][j] != 0)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
