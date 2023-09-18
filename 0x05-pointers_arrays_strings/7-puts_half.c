#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the given string
 */
void puts_half(char *str)
{
	int len = _strlen(str), n = 0;

	n = (len % 2 == 1 ? (len + 1) / 2 : len / 2);
	while (str[n])
	{
		_putchar(str[n++]);
	}
	_putchar('\n');
}

/**
 * _strlen - counts the number of leeters in a string
 *
 * @s: the given string
 * Return: the counted letters
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
