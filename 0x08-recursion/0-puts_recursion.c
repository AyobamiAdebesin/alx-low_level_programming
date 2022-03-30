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
		return _putchar('\0');
	}

       	_puts_recursion(s++);

}

