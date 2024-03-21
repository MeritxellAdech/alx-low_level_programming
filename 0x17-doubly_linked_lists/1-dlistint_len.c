#include "lists.h"

/**
 * dlistint_len - return the number of nodes
 *
 * @h: the list
 * Return: the number of nodes found
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
