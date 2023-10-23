#include "lists.h"

/**
 * free_listint2 - frees a list and set the head to null
 *
 * @head: the address of the given list
 */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (!head)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
