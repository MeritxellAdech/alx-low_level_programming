#include "main.h"

/**
 * _strlen_recursion - returns the length of the given string @s
 *
 * @s: the given string
 *
 * Return: the length of the given string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_string_recursion(s + 1) + 1);
	}
	return (0);
}
