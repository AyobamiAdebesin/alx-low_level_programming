#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function
 * @argc: The argument count
 * @argv: The  argument vector
 * Return: 0(Success)
 */

int main(int argc, char **argv)
{
	int result;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", result);
	}

	return (0);
}
