#include "main.h"
/**
 * factorial - Print the factorial of an integer
 *@n: The integer
 *Return: -1 or true
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
