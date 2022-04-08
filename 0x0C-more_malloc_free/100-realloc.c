#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @old_size: Size of the initial memory block
 * @new_size: Size of the new memory block
 * @ptr: Pointer to the previous block
 * Return: Pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size ==  old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
