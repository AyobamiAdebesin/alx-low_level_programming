#include "main.h"
#include <stdio.h>

/*
 * add - Adds two integer together
 * a: The first integer
 * b: The second integer
 * Return: the sum of a and b
 *
 */
int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int sub(int a, int b)
{
	int c;
	c = a - b;
	return c;
}

int div(int a, int b)
{
	int c;
	c = a / b;
	return c;
}

int mul(int a, int b)
{
	int c;
	c = a * b;
	return c;
}

int mod(int a, int b)
{
	int c;
	c = a % b;
	return c;
}	
