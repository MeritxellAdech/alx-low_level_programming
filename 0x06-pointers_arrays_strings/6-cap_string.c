#include "main.h"

/**
 * cap_string - capitalize string
 * @s: the string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int index = 0;
	char delimiters[] = ",;.!?\"(){}\n \t";
	unsigned int del_index;

	while (s[index] != '\0')
	{
		del_index = 0;
		while (del_index < (sizeof(delimiters) / sizeof(char)) - 1)
		{
			if (s[index] == delimiters[del_index])
			{
				if (s[index] == '\t')
					s[index] = ' ';
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
				{
					s[index + 1] = s[index + 1] - 32;
					index++;
					break;
				}
			}
			del_index++;
		}
		index++;
	}

	return (s);
}
