#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head node
 *
 * Return: The number of nodes in the listint_ list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return count;
}
