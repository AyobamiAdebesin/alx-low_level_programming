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
	if ((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
