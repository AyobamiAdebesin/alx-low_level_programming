#include "main.h"
/**
 *is_prime_number - Check if an integer is prime
 *@n: The integer
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 1) 
		return (0);
	if (n > 0)
	{	
		if (n % 1 == 0 && n % n == 0)
			return (1);
	}
	else
		return (0);
}

