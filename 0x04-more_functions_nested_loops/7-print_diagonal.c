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
		for (count = 1; count < n + 1; count++)
		{
			count_space = count;
			while (count_space > 0)
			{
				_putchar(32);
				count_space--;
				_putchar('\n');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
