#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area
 * @dest: The destination buffer
 * @src: the source buffer
 * @n: The number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
