#include "lists.h"

/**
 * print_list - prints all the element of a list
 *
 * @h: the gien list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int total = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		total++;
	}
	return (total);
}
