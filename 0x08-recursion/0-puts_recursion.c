#include "main.h"

/**
 * _puts_recursion - prints a string.
 *
 * @s: the given string
 */
void _puts_recursion(char *s)
{
	char letter = *s;

	if (letter != '\0')
	{
		_putchar(letter);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
