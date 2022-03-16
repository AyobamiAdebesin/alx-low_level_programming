#include "main.h"
/**
 * print_sign - Check if a number is +ve, -ve or 0
 *
 * @n: Number to be checked
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else  if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
