#include "main.h"

/**
 * largest_number - Print the largest number of 3 numbers
 *
 * @a: The first number
 * @b: The second number
 * @c: The last number
 * 
 * Return: The largest number of the 3
 */

int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
