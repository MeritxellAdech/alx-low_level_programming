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
	char *chars = "abcdefghijklmnopqrstuvwxyz";
	int str_index = 0, char_index = 0;
	int table[] = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
	-13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13};

	while (str[str_index])
	{
		char_index = 0;
		while (char_index < 27)
		{
			if (str[str_index] == chars[char_index] ||
			(str[str_index] == chars[char_index] - 32))
			{
				str[str_index] = str[str_index] + table[char_index];
				break;
			}
			char_index++;
		}
		str_index++;
	}

	return (str);
}
