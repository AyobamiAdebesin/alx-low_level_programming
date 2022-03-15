#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always void (Success)
 */

void print_alphabet(void)
{
	int count = 97;

	while (count < 123)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
