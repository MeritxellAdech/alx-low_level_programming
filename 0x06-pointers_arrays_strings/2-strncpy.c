#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: first string
 * @src: second string
 * @n: byte to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d_len = 0;

	while (src[d_len] != '\0' && d_len < n)
	{
		dest[d_len] = src[d_len];
		d_len++;
	}

	while (d_len < n)
	{
		dest[d_len] = '\0';
		d_len++;
	}

	return (dest);
}
