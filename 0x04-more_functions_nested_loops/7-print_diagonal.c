#include "main.h"
/**
 * print_diagonal - Print a diagonal line on the terminal
 * @n: The number of lines to be printed
 * Return: The diagonal line
 */
void print_diagonal(int n)
{
	int count;
	int count_space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			for (count_space = 0; count_space < n; count_space++)
			{
				if (count_space == count)
				{
					_putchar('\\');
				}
				else if (count_space < count)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
