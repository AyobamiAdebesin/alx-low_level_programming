#include "lists.h"

/**
 * listint_len - Returns the no of elements in a 
 * linked listint_t list
 * @h: Pointer to the head node
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
