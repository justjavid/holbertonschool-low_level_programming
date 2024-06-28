#include "main.h"

/**
 * _isupper - Main entry
 * @c: variable
 * Return: Big letters 1, small letters 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
