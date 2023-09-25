#include "main.h"

/**
 * _memset - replace a number of already existing values
 * with a newly set of given values
 *
 * @s: is the pointer to the memory aread to be filled
 * @b: the values to fill the memory with
 * @n: the number of @b to fill in @s
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
