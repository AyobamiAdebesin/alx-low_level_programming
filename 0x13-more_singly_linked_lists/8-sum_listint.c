#include "lists.h"

/**
 * sum_listint - sum all the data of a listint_t list
 * @head: Pointer to the head node
 *
 * Return: The computed sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
