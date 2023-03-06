#include "main.h"

/**
 * _strspn - Get the length of the given
 * substring in iven string
 * @s: The given string
 * @accept: The lookup substring
 * Return: The length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	unsigned int index = 0, lookup_index, i, j;
	unsigned int size = 0;

	while (accept[size] != '\0')
	{
		size++;
	}
	while (s[index] != '\0')
	{
		j = 0;
		if (s[index] != accept[j])
		{
			index++;
			continue;
		}
		lookup_index = 0;
		i = index;
		while (lookup_index < size)
		{
			if (s[i] == accept[j])
			{
				length++;
			}
			lookup_index++;
			i++;
			j++;
		}
		if (length == size)
			break;
		length = 0;
		index++;
	}
	return (length);
}
