#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 *
 * @h: the given list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int total = 0;

	while (h)
	{
		h = h->next;
		total++;
	}

	return (total);
}
