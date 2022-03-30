#include "main.h"
/**
 * _puts_recursion - print a string recursively
 * @s: address to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*(s++) == '\0')
	{
		_putchar('\n');
		return;
	}
	else{
		_puts_recursion(s++);
	}

}

