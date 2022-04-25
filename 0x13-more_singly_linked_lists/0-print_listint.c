#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head node
 *
 * Return: The number of nodes in the listint_ list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int n;

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		count++;
	}

	return count;
}
