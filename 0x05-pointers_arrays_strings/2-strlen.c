#include "main.h"

/**
 * _strlen - counts the number of letters is a string
 *
 * @s: the string to be counted
 * Return: the number of counted letters
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
