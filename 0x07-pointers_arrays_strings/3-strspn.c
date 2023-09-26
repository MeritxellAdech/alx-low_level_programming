#include "main.h"

/**
 * _strspn - returns the position of the first character in the string
 * that is not part of the substring
 *
 * @s: is the given string
 * @accept: is the substring
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int substr_index, string_index = 0;

	while (s[string_index])
	{
		substr_index = 0;

		while (accept[substr_index])
		{
			if (s[string_index] == accept[substr_index])
				break;
			substr_index++;
		}
		if (!accept[substr_index])
			break;
		string_index++;
	}
	return (string_index);
}
