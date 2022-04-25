#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL
 * @head: pointer to the head node
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	while ((curr = *head) != NULL)
	{
		*head = (*head)->next;
		free(curr);
		*head = NULL;
	}
}

