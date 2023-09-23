#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 *
 * @n: the length of the line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int gap = 0, rows = 0, i = 1;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	while (rows < n)
	{
		while (gap < n)
		{
			for (i = 1; i <= gap; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			gap++;
		}
		rows++;
	}
}
