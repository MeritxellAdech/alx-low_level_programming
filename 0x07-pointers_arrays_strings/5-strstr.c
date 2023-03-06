#include "main.h"

/**
 * _strstr - Finds the first occurence of the
 * substring @needle in the given string
 * @haystack
 * @haystack: The search string
 * @needle: The lookup string
 * Return: A pointer to the beginning of
 * the found substring otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index = 0, j = 0, i = 0;
	int size = 0;

	if (needle[index] == '\0')
	{
		return (&haystack[index]);
	}
	while (needle[size] != '\0')
	{
		size++;
	}
	while (needle[index] != '\0')
	{
		j = index;
		while (haystack[j] != '\0')
		{
			if (needle[index] == haystack[j])
			{
				i++;
				j++;
				break;
			}
			j++;
		}
		index++;
	}
	if (i == size)
	{
		return (&haystack[j - size]);
	}
	return (NULL);
}
