#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 *
 * @str: the given string
 */
void puts2(char *str)
{
	int even_char = 0;

	while (*str)
	{
		if (even_char % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		even_char++;
	}
	_putchar('\n');
}
