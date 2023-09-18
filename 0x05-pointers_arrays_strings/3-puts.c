#include "main.h"

/**
 * _puts - printing to the stdout
 *
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
