#include "main.h"

/**
 * _strlen_recursion - counts the number of character in a string
 *
 * @s: the string
 * Return: the number of characters counted
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
