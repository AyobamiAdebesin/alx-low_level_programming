#include "main.h"
/**
 * _strlen_recursion - Find the length of a string recursively
 * @s: The string
 * Return: int length of s
 */

int _strlen_recursion(char *s)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + _strlen_recursion(s+1));
	}
}
