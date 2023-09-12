#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		_putchar(alpha++);
	}
	_putchar('\n');
}
