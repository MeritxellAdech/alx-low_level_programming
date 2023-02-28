#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: is te string
 */
void print_rev(char *s)
{
	int len = 0;
	char *word = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	len = len - 1;
	while (len >= 0)
	{
		_putchar(word[len]);
		len--;
	}
	_putchar('\n');
}
