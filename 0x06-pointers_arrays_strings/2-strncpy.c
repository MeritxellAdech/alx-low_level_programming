#include "main.h"

/**
 * _strncpy - copies n bytes of string to
 * destination string
 *
 * @dest: is the resultant string
 * @src: the string to copy to the resultant
 * @n: the number of letters to be copied
 *
 * Return: ponter to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int next_char = 0;

	while (src[next_char] && next_char < n)
	{
		dest[next_char] = src[next_char];
		next_char++;
	}
	while (next_char < n)
	{
		dest[next_char] = '\0';
		next_char++;
	}

	return (dest);
}
