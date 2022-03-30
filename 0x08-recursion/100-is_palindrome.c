#include "main.h"
/**
 * _strlen - Returns the length of a string recursively
 * @s: The string
 * Return: the length of the string s 
 */

int _str_len(char *s)
{
	if (*s != '\0')
	{
		return (1 + _str_len(s + 1));
	}
	else
		return (0);
}

/** 
 * comparator - Compares a stringusing the first and last character
 * @s: The string pointer
 * @n1: The starting index
 * @n2: The last index
 * Return: 1 or 0
 */

int comparator(char* s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n2 == n1 + 1)
		{
			return (1);
		}
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Check if a string is palindrome using the above functions
 * @s: The string to be checked
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len_s;
      	len_s = _str_len(s);
	
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, len_s - 1));
}
