#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 *
 * @head: is the first node in the list
 * @n: the value to be assigned to the node
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first = NULL;

	first = malloc(sizeof(dlistint_t));
	/*Check that the allocation worked*/
	if (first == NULL)
		return (NULL);

	/*set the values of the new node*/
	first->n = n;
	first->next = *head;
	first->prev = NULL;

	if (*head)
	{
		/*passing values/ honors*/
		(*head)->prev = first;
	}

	/*making head point to first*/
	*head = first;

	return (first);
}
