#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the first element in the list
 * @idx: the given position where to insert the new node
 * @n: the value for the new node
 * Return: the address of the new node
 * Otherwise, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *next_node = NULL, *new_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	node = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (node)
	{
		next_node = node->next;
		if (i + 1 == idx)
		{
			node->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
