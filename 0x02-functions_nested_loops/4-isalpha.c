#include "main.h"
/**
 * _isalpha - Checks if c is a letter, lower case or upper case
 *
 * @c: The value to be checked
 *
 * Return: 1 if it is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90) && if (c >= 97 && c <= 112)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

