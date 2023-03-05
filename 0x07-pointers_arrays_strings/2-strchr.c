#include "main.h"

/**
 * _strchr - Find the first index of the given
 * character @c in the search string
 * @s: The search string
 * @c: The lookup character
 * Return: The first occurence of the given
 * character or NULL if @c is not found
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (&s[index]);
		index++;
	}
	if (s[index] == c)
		return (&s[index]);
	return (NULL);
}
