#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a specific position
 *
 * @head: the first node in the list
 * @index: the position of the node
 * Return: the position of the node
 * or NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	node = head;
	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
