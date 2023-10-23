#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a list
 *
 * @head: the address of the given list
 * @n: the value of the node
 * Return: the address of the new added node
 * NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
