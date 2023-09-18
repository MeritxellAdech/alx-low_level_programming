#include "main.h"

/**
 * _strcpy - copying a string
 *
 * @dest: the location to paste the copied string
 * @src: The string to be copied
 * Return: the pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];

	return (dest);
}
