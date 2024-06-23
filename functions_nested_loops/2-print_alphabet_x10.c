#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 * each followed by a newline.
 *
 * Description:
 * This function iterates through the lowercase letters from
 * 'a' to 'z' and prints each character
 * ten times using the _putchar function.
 * Each sequence of letters is followed by a newline character '\n'.
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
		_putchar('\n');
		n++;
	}
}
