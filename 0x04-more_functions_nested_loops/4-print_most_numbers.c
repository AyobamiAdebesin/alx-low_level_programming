#include "main.h"
/**
 * print_most_numbers - Print 1 to 10 excluding 2 and 4
 *
 * Return: 0 Success Always
 */
void print_most_numbers(void)
{
	int count;

	for (count = 48; count < 57; count++)
	{
		while (count != 50 || count != 52)
		{
			_putchar(count);
		}
	}
	_putchar('\n');
}
