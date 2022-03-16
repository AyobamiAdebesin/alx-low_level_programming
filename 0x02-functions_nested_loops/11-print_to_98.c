#include "main.c"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 *
 * @n: Starting point
 *
 * Return: void
 */
void print_to_98(int c)
{
	if (c > 0 && c < 98) 
	{
		for (int count = c; count <= 98; count ++)
		{
			printf("%d, ",count);
		}
	}
	else if (c < 0)
	{
		for (int count2 = c; count2 <= 98; count2 ++)
		{
			printf("%d, ", count2);
		}
	}
	else if (c > 98)
	{
		for (int count3 = c; count3 >= 98, count3 --)
		{
			printf("%d, ", count3);
		}
	}
	_putchar('\n');
}
