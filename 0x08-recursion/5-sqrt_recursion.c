#include "main.h"
/**
 * power_operation - Returns the square root of a natural number
 * @n: the integer
 * @c: The power iterator
 * Return: the square root
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - Returns the square root of an integer
 * @n: The integer
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (power_operation(n, 2));
}
