#include "main.h"
/**
 * _puts_recursion - print a string recursively
 * @s: address to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
		return ;
	for(i = 0; *(s + i) != '\0'; i++)
	{
		_puts_recursion(s + i);
	}
	_putchar('\n');
}
