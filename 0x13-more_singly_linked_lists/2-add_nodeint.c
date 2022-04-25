#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a
 * listint_t list
 * @head: The Pointer to the head address
 * @n: The new data to be added
 *
 * Return: The address of a the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (**head);
}

