#include "main.h"

/**
 * _strlen - counts the number of character in a string
 *
 * @s: the given string
 * Return: the number of characters or 0 if NULL
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat -concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int slen = _strlen(s1) + _strlen(s2), i = 0;
	char *concat;
	int j = 0;

	concat = malloc(slen + 1);
	if (concat == NULL)
		return (NULL);
	while (i < _strlen(s1))
	{
		if (s1 == NULL)
			break;
		concat[i] = s1[i];
		i++;
	}
	while (i < slen && j < _strlen(s2))
	{
		if (s2 == NULL)
			break;
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';

	return (concat);
}
