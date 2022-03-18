#include"main.h"
/**
 * print_square - Print a square of size n
 * @size: The size of the square
 * Return: 0
 */
void print_square(int size)
{
	int count_x;
	int count_y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (count_x = 0; count_x < size; count_x++)
		{
			for (count_y = 0; count_y < size; count_y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
