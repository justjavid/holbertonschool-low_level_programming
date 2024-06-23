#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	char *c = ",";
	char *ch = " ";

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
		continue;
		putchar(*c);
		putchar(*ch);
	}
	putchar('\n');
	return (0);
}
