#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * FizzBuzz - Execute the fizz buzz code
 * Return: The Fizz Buzz output
 */
void FizzBuzz(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 5 == 0)
		{
			if (count % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (count % 5 != 0)
		{
			printf("%d ", count);
		}
	}
}
