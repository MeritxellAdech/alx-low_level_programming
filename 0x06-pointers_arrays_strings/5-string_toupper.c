#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @s: string to convert
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] = s[index] - 32;
		index++;
	}

	return  (s);
}
