#include "main.h"
/*
 * _memset() - A function that fills the first n bytes
 * @s: The address of the memory to be filled
 * @n: The first n bytes of memory
 * Return - A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
