#include "main.h"

/**
 * _strpbrk - locate the first occurence of any
 * byte in the given string @accept in the
 * string @s
 *
 * @s: a string
 * @accept: the search string
 *
 * Return: a pointer to the byte in @s that
 * match one of the bytes in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int string_index = 0, substr_index = 0;

	while (s[string_index])
	{
		substr_index = 0;
		while (accept[substr_index])
		{
			if (s[string_index] == accept[substr_index])
				return (&s[string_index]);
			substr_index++;
		}
		string_index++;
	}

	return (NULL);
}
