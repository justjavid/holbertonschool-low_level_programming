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

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
