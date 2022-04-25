#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: Pointer to the head node
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
