#include "main.h"

/**
 * string_toupper - convert all lowercase
 * letters to uppercase in a string
 *
 * @str: the given string
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] > 96 && str[index] < 123)
		{
			str[index] = str[index] - 32;
		}
		index++;
	}

	return (str);
}
