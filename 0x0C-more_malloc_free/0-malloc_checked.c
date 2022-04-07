#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Checks memory allocation using malloc
 * @b: size of memory to be allocated
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b * sizeof(char));

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
