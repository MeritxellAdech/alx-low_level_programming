#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: this is the parameter
 * Return: success char
 */
char *leet(char *s)
{
	char letters[] = "aeotl";
	char digits[] = "43071";
	int size = sizeof(digits);
	int w_len = 0, i;

	while (s[w_len] != '\0')
	{
		i = 0;
		while (i < size)
		{
			if (s[w_len] == letters[i] || (s[w_len] + 32) == letters[i])
			{
				s[w_len] = digits[i];
				break;
			}
			i++;
		}
		w_len++;
	}
	return (s);
}
