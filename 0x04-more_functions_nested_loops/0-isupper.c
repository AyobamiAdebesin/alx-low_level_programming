#include "main.h"
/**
 * _isupper - Checks if a character is upper case or lower case
 * @c: integer to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
