#include "main.h"

/**
 * _strpbrk - Find the first occurence of @accept
 * in the search string @s
 * @s: The search string
 * @accept: The lookup string
 * Return: The byte where @accept is located in
 * the search string @s or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int index = 0, j;

	while (s[index] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[index] == accept[j])
			{
				return (&s[index]);
			}
			j++;
		}
		index++;
	}

	return (NULL);
}
