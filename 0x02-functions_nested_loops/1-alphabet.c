#include "main.h"
/**
 * print_alphabet - Print the alphabets in lower case
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
