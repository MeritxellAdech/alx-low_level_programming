#include "main.h"

/**
 * _strchr - searches for the first occurance of a given
 * character in a string
 *
 * @s: is the string to search in
 * @c: is the character to search for
 * Return: the pointer of that character
 */
char *_strchr(char *s, char c)
{
	int next = 0;

	while (s[next] != '\0' || (s[next] == '\0' && s[next] == c))
	{
		if (s[next] == c)
		{
			return (&s[next]);
		}
		next++;
	}

	return (NULL);
}
