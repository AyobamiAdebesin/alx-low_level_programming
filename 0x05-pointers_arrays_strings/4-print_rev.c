#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
