#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: the given list
 */
void free_listint(listint_t *head)
{
	listint_t *node = NULL;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
