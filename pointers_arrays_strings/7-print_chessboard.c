#include "main.h"

/**
 *  print_chessboard - print chess board.
 *   *@a: pointer
 *     *Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int n = 0;
	char *p = *a;

	while (n < 8)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(p[i]);
			if (i == 7)
			_putchar('\n');
		}
		p = p + 8;
		n = n + 1;
	}
}
