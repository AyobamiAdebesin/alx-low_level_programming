#include <stdio.h>
#include <stdlib.h>
#define file __FILE__
/**
 * main - Print the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", file);
	return (0);
}
