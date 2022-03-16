#include "main.h"
/**
 * print_last_digit - Print the last digit of an integer
 *
 * @n: the number of which the last digit is to be printed
 *
 * Return: The last digit of an integer
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
	{
		_putchar(-result + 48);
		return (-result);
	}
	else
	{
		_putchar(result + 48);
		return (result);
	}
}
