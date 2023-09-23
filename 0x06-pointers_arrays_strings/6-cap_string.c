#include "main.h"

/**
 * cap_string - capitalize all words of
 * a string
 *
 * @str: the given string
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int s = 0, d = 0;
	char *delim = ",;.!?\"(){} \t\n";

	while (str[s])
	{
		d = 0;
		while (!(str[s] >= 97 && str[s] <= 122))
			s++;
		if (s == 0)
			str[0] = str[0] - 32;
		while (delim[d])
		{
			if (str[s - 1] == delim[d])
			{
				str[s] = str[s] - 32;
				break;
			}
			d++;
		}
		s++;
	}
	return (str);
}
