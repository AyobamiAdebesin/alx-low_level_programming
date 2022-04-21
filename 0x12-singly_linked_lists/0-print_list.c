#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print the elements of a singly linked list
 * @h: Pointer to a node
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
	h = h->next;
	}
	
	return (count);
}
