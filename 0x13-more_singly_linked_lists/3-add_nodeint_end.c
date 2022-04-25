#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of of a
 * listint_t list
 * @head: Pointer to the head node
 * @n: New data to be passed to the new node
 *
 * Return: Address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}

	return (last);
}
