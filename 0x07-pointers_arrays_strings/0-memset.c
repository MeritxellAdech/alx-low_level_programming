#include "main.h"

/**
 * _memset- Write bytes of size @n into the location
 * of @s
 * @s: The memory address to be filled
 * @b: The bytes to be written
 * @n: The size to be written
 * Return: The memory address written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index++] = b;
	}
	return (s);
}
