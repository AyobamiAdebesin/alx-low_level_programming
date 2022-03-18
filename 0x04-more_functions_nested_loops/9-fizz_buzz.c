#include <stdlib.h>
#include <stdio.h>
/**
 * main - Execute the fizz buzz code
 * Return: The Fizz Buzz output
 */
int main(void)
{
	int count;

	count = 1;
	printf("%d", count);
	for (count = 2; count <= 100; count++)
	{
		if (count % 5 == 0)
		{
			if (count % 3 == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Buzz");
			}
		}
		else if (count % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", count);
		}
	}
	printf("\n");
	return (0);
}
