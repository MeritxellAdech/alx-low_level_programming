#include "main.h"

/**
 * _strlen - counts the number of character in a string
 *
 * @s: the given string
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}

/**
 * _strdup - duplicates a given string
 *
 * @str: the given string
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int i, slen = _strlen(str);
	char *copy;

	if (slen == -1)
		return (NULL);
	copy = malloc(slen);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < slen; i++)
		copy[i] = str[i];
	return (copy);
}
