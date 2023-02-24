#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the drawer
 */
void print_diagonal(int n)
{
	int i, move;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
			for (move = 0; move <= i; move++)
			{
				if (i == (n - 1))
					break;
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
