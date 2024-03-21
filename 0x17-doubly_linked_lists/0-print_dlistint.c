#include "lists.h"

/**
 * print_dlistint - prints all the elements in a list
 *
 * @h: given list
 * Return: the number of found elements or -1
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (-1);
	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
