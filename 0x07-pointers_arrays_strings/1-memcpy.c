#include "main.h"

/**
 * _memcpy - copies a given number of a constant character
 * in a memory area
 * @dest: the memory area
 * @src: the constant to be copied
 * @n: the number of times @src is copied to @dest
 * Return: the address to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
