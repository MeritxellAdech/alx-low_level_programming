#include "main.h"

/**
 * _strlen - count the number of characters in string
 *
 * @str: the given string
 * Return: the number of characters counted
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length])
		length++;

	return (length);
}

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 *
 * @b: the given binary
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, index = 0, bit_flag = 1;

	if (!b)
		return (0);

	index = _strlen(b);
	while (index > 0)
	{
		if (b[index - 1] != '0' && b[index - 1] != '1')
			return (0);

		if (b[index - 1] == '1')
		{
			num += bit_flag;
		}
		bit_flag *= 2;
		index--;
	}

	return (num);
}
