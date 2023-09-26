#include "main.h"

/**
 * _strstr - finds the first occurence of the
 * substring @needle in a given string
 *
 * @haystack: the given string
 * @needle: the substring to find
 *
 * Return: pointer to the begining of the
 * located substring otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_index = 0, needle_size = 0, haystack_index = 0;
	int chars_matched_count = 0;

	if (!needle[0])
		return (&haystack[0]);

	while (needle[needle_size])
	{
		needle_size++;
	}

	while (needle[needle_index])
	{
		haystack_index = needle_index;
		while (haystack[haystack_index])
		{
			if (needle[needle_index] == haystack[haystack_index])
			{
				chars_matched_count++;
				haystack_index++;
				break;
			}
			haystack_index++;
		}
		needle_index++;
	}
	if (chars_matched_count == needle_size)
		return (&haystack[haystack_index - needle_index]);

	return (NULL);
}
