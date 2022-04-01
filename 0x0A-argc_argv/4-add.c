#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int count;
	int sum;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (*(argv[count]) >= 'a' && *(argv[count]) <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[count]);
		}
		printf("%i\n", sum);
	}
	return (0);
}

