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
	int w_len = 0;

	while (s[w_len] != '\0')
	{
		if (s[w_len] == 'a' || s[w_len] == 'A')
			s[w_len] = '4';
		if (s[w_len] == 'e' || s[w_len] == 'E')
			s[w_len] = '3';
		if (s[w_len] == 'o' || s[w_len] == 'O')
			s[w_len] = '0';
		if (s[w_len] == 't' || s[w_len] == 'T')
			s[w_len] = '7';
		if (s[w_len] == 'l' || s[w_len] == 'L')
			s[w_len] = '1';
		w_len++;
	}
	return (s);
}
