#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the given number
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	char letter = '\0';

	letter = (n > 0 ? '+' : n < 0 ? '-' : '0');
	_putchar(letter);

	return (n > 0 ? 1 : n < 0 ? -1 : 0);
}
