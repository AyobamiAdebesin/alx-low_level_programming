#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse recursively
 * @s: The string to be reversed
 * ReturnL void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s+1);
	return (*s);
}	
