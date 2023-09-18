#include "main.h"

/**
 * print_rev - prints a string in reversed order
 *
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int lastChar = _strlen(s);

	while (lastChar >= 0)
	{
		_putchar(s[lastChar--]);
	}
	_putchar('\n');
}

/**
 * _strlen - counts the number of letters
 * @s: the string to be counted
 * Return: the number of letters counted
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length - 1);
}
