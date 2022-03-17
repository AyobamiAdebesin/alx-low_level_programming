#include "main.h"
/**
 * _isdigit - Check if a character is a digit or not
 * @c: The integer to be checked
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
