#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 *
 * @n: the length of the line
 * Return: nothing
 */
void print_line(int n)
{
	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
