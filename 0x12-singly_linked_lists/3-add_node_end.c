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
 * add_node_end -  add a node at the end of a list
 *
 * @head: the address of the head node
 * @str: the value of the new added node
 *
 * Return: the address of the new element
 * otherwise, NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL, *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	node = *head;
	new_node->str = strdup(str);
	if (new_node->str)
	{
		new_node->len = _strlen(new_node->str);
		new_node->next = NULL;
		if (!node)
		{
			*head = new_node;
			return (new_node);
		}
		while (node->next)
		{
			node = node->next;
		}
		node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
