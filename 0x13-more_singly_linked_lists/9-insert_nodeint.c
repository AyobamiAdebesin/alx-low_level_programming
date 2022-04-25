#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the head node
 * @idx: Index at which to insert node
 * @n: Data for the new node
 *
 * Return: Address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t newNode = malloc(sizeof(listint_t));
	int count = 0;

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	while (curr != NULL)
	{
		if (count == idx)
		{
			newNode->next = curr->next;
			curr->next = newNode;
			return (newNode);
		}
		count++;
		curr = curr->next;
	}
}
				

