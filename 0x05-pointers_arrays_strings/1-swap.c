#include "main.h"
/**
 * swap_int - A functin that swaps 2 integers
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
