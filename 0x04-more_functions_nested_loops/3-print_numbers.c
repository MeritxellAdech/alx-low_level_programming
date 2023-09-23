#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int n = 48;

	while (n >= 48 && n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
