#include "main.h"
/**
 * more_numbers - Print more numbers
 * Return: 0 Always Success
 */

void more_numbers(void)
{
	int count;
	int ch;

	for (count = 1; count < 11; count++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch > 10)
			{
				_putchar(49);
			}
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
