#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 *
 * @head: the given list
 * @n: the value of a node
 * Return: the address of the new node
 * NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	node = *head;
	while (node && node->next)
		node = node->next;
	new_node->n = n;
	if (node)
		node->next = new_node;
	else
		*head = new_node;
	new_node->next = NULL;
	return (new_node);
}
