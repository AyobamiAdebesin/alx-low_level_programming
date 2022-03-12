#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, k;

	j = 48;
	k = 48;

	while (k < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (k != j && k < j)
			{
				putchar(k);
				putchar(j);
				if (j == 57 && k == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		k++;
	}
	putchar(' ');
	return (0);
}
