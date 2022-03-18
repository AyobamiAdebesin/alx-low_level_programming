#include "main.h"
/**
 * print_diagonal - Print a diagonal line on the terminal
 * @n: The number of lines to be printed
 * Return: The diagonal line
 */

void print_triangle(int size)
{
	int count;
	int count_space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			for (count_space = 0; count_space < size; count_space++)
			{
				if (count_space == count)
				{
					_putchar(' ');
				}
				else if (count_space < count)
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
