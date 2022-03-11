#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; --i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
