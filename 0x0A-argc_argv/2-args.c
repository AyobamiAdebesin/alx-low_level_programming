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
	int count;

	for(count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
