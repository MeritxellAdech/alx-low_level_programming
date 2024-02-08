#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * of a list
 *
 * @head: the first element in the list
 * @index: the given index
 * Return: 1 on success or -1 on failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL, *next_node = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (node)
	{
		next_node = node->next;
		if (i + 1 == index)
		{
			tmp = node;
			node = next_node;
			next_node = node->next;
			free(tmp);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
