#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @str: the given string
 *
 * Return: the resulting string
 */
char *leet(char *str)
{
	int s = 0, r = 0;
	char *pattern = "aeotl";
	char *rep = "43071";

	while (str[s])
	{
		r = 0;
		while (pattern[r])
		{
			if (str[s] == pattern[r] ||
			str[s] == pattern[r] - 32)
			{
				str[s] = rep[r];
			}
			r++;
		}
		s++;
	}

	return (str);
}
