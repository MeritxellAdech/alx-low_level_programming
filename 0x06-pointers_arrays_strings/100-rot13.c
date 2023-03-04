#include "main.h"

/**
 * rot13 - encode using rot13
 * @s: the string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int s_len = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_letters[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int index, size = sizeof(letters);

	while (s[s_len] != '\0')
	{
		index = 0;
		while (index < size)
		{
			if (s[s_len] == letters[index])
			{
				s[s_len] = rot_letters[index];
				break;
			}
			index++;
		}
		s_len++;
	}

	return (s);
}
