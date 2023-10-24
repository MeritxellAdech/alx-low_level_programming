#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: is the first node in the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int head_data = 0;

	if (!head)
		return (0);
	while (*head)
	{
		node = (*head)->next;
		head_data = (*head)->n;
		free(*head);
		*head = node;
		return (head_data);
	}
	return (0);
}
