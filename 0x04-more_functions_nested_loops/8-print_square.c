#include "main.h"

/**
 * print_square - prints a square
 * @size: the size
 */
void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
