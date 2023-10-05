#include "main.h"

/**
 * _strlen - counts the number of characters
 * present in a string
 *
 * @s: the given string
 * Return: the number of characters counted
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcount - returns a number of given characters
 * from a string
 *
 * @s: string
 * @n: the number of characters from s
 * Return: the number of characters
 */
unsigned int _strcount(char *s, unsigned int n)
{
	unsigned int chars = 0;

	chars = _strlen(s);
	if (n >= chars)
		return (chars);
	else
		return (n);
}

/**
 * string_nconcat - concatenates two string in a new location
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to be copied
 * Return: a pointer to the new memory allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, i = 0, j = 0;

	len = _strlen(s1) + _strcount(s2, n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);

	while (i < _strlen(s1))
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (i < len)
	{
		if (j <= _strcount(s2, n))
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
	return (str);
}
