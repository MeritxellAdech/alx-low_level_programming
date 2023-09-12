#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int alpha, counter;

	for (counter = 0; counter < 10; counter++)
	{
		alpha = 97;
		while (alpha < 123)
		{
			_putchar(alpha++);
		}
		_putchar('\n');
	}
}
