#include "lists.h"

/**
 * _strlen - counts the number of characters in a string
 *
 * @s: the given string
 * Return: the number of characters or -1
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (-1);
	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - add a node at the beginning
 * of a list
 *
 * @head: the first node in the list
 * @str: the value for the node
 * Return: the address of the new node
 * otherwise, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first = NULL;
	int len = 0;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);

	first->str = strdup(str);
	if (first->str)
	{
		len = _strlen(first->str);
		first->len = len;
		first->next = *head;
		*head = first;
		return (first);
	}
	free(first);
	return (NULL);
}
