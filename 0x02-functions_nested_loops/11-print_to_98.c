#include "main.h"
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
		for (; c <= 98; c ++)
		{
			printf("%d, ",c);
		}
	}
	else if (c < 0)
	{
		for (; c <= 98; c ++)
		{
			printf("%d, ", c);
		}
	}
	else if (c > 98)
	{
		for (; c >= 98; c --)
		{
			printf("%d, ", c);
		}
	}
	_putchar('\n');
}
