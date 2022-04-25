#include "lists.h"

/**
 * pop_listint - Deletes the head of a node of a linked list
 * @head: Pointer to the head node 
 *
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int val;

	if (temp == NULL)
		return (0);

	val = (temp)->n;
	*head = temp->next;
	free(*head);
	return (val);
}
