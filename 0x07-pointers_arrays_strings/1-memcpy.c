#include "main.h"

/**
 * _memcpy - Copy bytes from @src memory area to
 * @dest memory area.
 * @dest: The destination memory area to be
 * written to
 * @src: The source memory area to be copied
 * from
 * @n: The number of bytes to be copied
 * Return: The destination memory where the
 * bytes have been copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
