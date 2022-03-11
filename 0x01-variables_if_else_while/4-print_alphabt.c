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

	for (i = 97; i <= 122; ++i)
	{
		if (i == 102 && i == 113)
		{
			continue;
		}
		else{
			putchar(i);
		}
	}
	return (0);
}
