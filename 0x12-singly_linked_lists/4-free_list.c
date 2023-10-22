#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: the given list
 */
void free_list(list_t *head)
{
	list_t *node = NULL;

	if (head)
		node = head->next;
	while (head)
	{
		free(head->str);
		free(head);
		head = node;
		if (!node)
			return;
		node = node->next;
	}
}
