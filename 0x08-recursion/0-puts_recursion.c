#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: is the given string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
