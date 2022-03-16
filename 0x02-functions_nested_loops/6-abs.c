#include "main.h"
/**
 * _abs - Prints the absolute value of an integer
 *
 * @n: Integer to be checked
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n*-1);
	}
	_putchar('\n');
}
