#include "main.h"
/**
 * _puts_recursion - print a string recursively
 * @s: address to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;
	_putchar(*(s + i));
	
	if (*(s + i) == '\0')
	{
		return;
	}

	return _puts_recursion(s+i);

	_putchar('\n');
}

