#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Main Entry
 *  @argc: variable that count things in command line.
 *  @argv: array of pointers to those strings.
 *  *Return: Success point 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
