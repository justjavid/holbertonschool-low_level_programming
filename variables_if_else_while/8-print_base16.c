#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	char ch = 'a';

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
