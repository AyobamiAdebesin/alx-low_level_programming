#include "lists.h"

/**
 * add_node - Adds a nodeat the beginning of a list_t list
 * @head: Double pointer to a the head node
 * @str: The string to be passed to the new node
 * Return: Pointer to the new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *newnode;
	unsigned int n;

	for (n = 0; *(str + n) != '\0'; n++)
		;

	newnode = (list_t *)malloc(sizeof(list_t));
	newnode->next = *head;
	newnode->str = new_str;
	newnode->len = n;

	return (newnode);
}
