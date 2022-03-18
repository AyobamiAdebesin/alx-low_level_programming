#include "main.h"
/**
 * print_line - Print a straight line
 * @n: The number of times the character s to be printed
 * Return: The lin
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
