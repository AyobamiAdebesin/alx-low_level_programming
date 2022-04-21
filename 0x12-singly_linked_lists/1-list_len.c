#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a list
 * @h: Pointer to a node
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
	h = h->next;
	}
	return (count);
}
