#include "main.h"
/**
 * print_diagonal - Print a diagonal line on the terminal
 * Return: The diagonal line
 */
void print_diagonal(int n)
{
	int count;
	int count_space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar(32);
			_putchar(92);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
