#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: the given string
 *
 * Return: the resulting string
 */
char *rot13(char *str)
{
	int index = 0;

	while (str[index])
	{
		if ((str[index] >= 97 && str[index] <= 109) ||
			(str[index] >= 65 && str[index] <= 77))
			str[index] += 13;
		else if ((str[index] >= 110 && str[index] <= 122) ||
			(str[index] >= 78 && str[index] <= 90))
			str[index] -= 13;
		index++;
	}

	return (str);
}
