#include "main.h"

/**
 * _strcat -  concatenates two string
 * @dest: the second string
 * @src: the first string
 * Return: success string
 */
char *_strcat(char *dest, char *src)
{
	int w_len = 0, i;

	if (src[w_len] == 0)
	{
		dest += ' ';
		w_len++;
	}
	while (src[w_len] != '\0')
	{
		dest += src[w_len - 1];
		w_len++;
	}
	return (dest);
}
