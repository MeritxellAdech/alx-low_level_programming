#include "lists.h"

/**
 * sum_listint - adds all the data in each node in a list
 *
 * @head: the first element in the list
 * Return: the sum total
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node = NULL;
	int total = 0;

	if (!head)
		return (0);

	node = head;
	while (node)
	{
		total += node->n;
		node = node->next;
	}
	return (total);
}
