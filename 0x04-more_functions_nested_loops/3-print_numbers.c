#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9
 * Return: All the numbers printed
 */
void print_numbers(void)
{
	int count;

	for (count = 48; count < 58; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
