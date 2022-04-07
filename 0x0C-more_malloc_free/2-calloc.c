#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: elements of the array
 * @size: Size of the elements
 * Return: pointer to the allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}
