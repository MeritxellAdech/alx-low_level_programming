#include "main.h"

/**
 * _strcpy - Write a function that
 * copies the string pointed to
 * by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 * @dest: first
 * @src: second
 * Return: The destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}
