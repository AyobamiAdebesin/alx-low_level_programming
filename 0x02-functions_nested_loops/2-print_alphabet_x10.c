#include "main.h"
/**
 * print_alphabet_x10 - Prints all the alphabet in lower case 10 times
 *
 * Return: void always(Success)
 */
void print_alphabet_x10(void)
{
	int count = 97;
	int loop_print;
	
	for (loop_print = 0; loop_print < 11; loop_print++)
	{
		count = 97;
		while (count < 123)
		{
		_putchar(count);
		count ++;
		}
		_putchar('\n');
	}
}	
