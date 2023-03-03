#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: first string
 * @src: second string
 * @n: bytes to concatenate
 * Return: success concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int s_len = 0, d_len = 0;

	while (dest[d_len] != '\0')
		d_len++;

	while (src[s_len] != '\0' && s_len < n)
	{
		dest[d_len] = src[s_len];
		s_len++;
		d_len++;
	}
	dest[d_len] = '\0';

	return (dest);
}
