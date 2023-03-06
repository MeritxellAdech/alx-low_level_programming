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
	int i = 0, j = 0;

	while (s[j] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
		{
			break;
		}
		j++;
	}
	return (j);
}
