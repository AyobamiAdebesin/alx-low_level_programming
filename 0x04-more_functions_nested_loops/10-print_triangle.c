#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int count, count_space;

	for (count = 0; count < size; count++)
	{
		for (count_space = 1; count_space < (size - count); count_space++)
			_putchar(' ');
		for (count_space--; count_space < size; count_space++)
			_putchar(35);
		if (count < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
