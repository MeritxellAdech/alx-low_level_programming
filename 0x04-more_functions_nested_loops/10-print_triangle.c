#include "main.h"

/**
 * print_triangle - prints a diagonal line on the terminal
 *
 * @size: the length of the line
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, n;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (n = size - i; n > 1; n--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
