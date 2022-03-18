#include <stdlib.h>
#include <stdio.h>
/**
 * main - Execute the fizz buzz code
 * Return: The Fizz Buzz output
 */
int main(void)
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
	printf("\n");
	return (0);
}
