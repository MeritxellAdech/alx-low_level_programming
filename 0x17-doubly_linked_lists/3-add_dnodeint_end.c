#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 *
 * @head: the head node
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *last = NULL;

	/*Allocate memory for the node*/
	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);

	/* setting the new node*/
	last->n = n;
	last->next = NULL;

	/*when the list is empty*/
	if ((*head) == NULL)
	{
		/*new_node*/
		last->prev = NULL;
		/*make it the head*/
		(*head) = last;
		return (last);
	}

	/*when the list has other nodes*/
	/*assign value to the tmp*/
	tmp = (*head);
	while (tmp->next)
	{
		/*move to the next node*/
		tmp = tmp->next;
		printf("%d\n", tmp->n);
	}

	/*assuming we are at the last node where tmp == NULL*/
	tmp->next = last;
	last->prev = tmp;

	/*return the address*/
	return (last);
}
