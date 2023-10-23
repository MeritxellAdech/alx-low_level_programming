#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;
	const listint_t *node = NULL;

	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		n++;
		node = node->next;

	}
	return (n);
}
