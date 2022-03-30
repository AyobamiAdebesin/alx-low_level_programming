#include "main.h"
/**
 * _pow_recursion - Print the power of an integer recursively
 *@x: Base integer
 *@y: power integer
 *Return: The power of x raise to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
