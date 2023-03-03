#include "main.h"

/**
 * cap_string - capitalize string
 * @s: the string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int index = 0;
	char delimiters[] = ",;.!?\"(){}\t\n ";
	int del_index;

	while (s[index] != '\0')
	{
		del_index = 0;
		while (del_index < (sizeof(delimiters) / sizeof(char)))
		{
			if (s[index] == delimiters[del_index])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
					s[index] = s[index] - 32;
				del_index++;
				break;
			}
		}
		index++;
	}
}
