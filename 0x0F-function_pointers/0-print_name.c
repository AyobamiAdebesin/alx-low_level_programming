#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: callback function
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name == NULL) || !(f == NULL))
		f(name);
}
