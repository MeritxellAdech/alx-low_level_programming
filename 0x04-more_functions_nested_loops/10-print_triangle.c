#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size
 */
void print_triangle(int size)
{
	int next, hash, space, loop;

	if (size > 0)
	{
		next = 1;
		while (next <= size)
		{
			space = size - next;
			loop = 0;
			while (loop < space)
			{
				_putchar(' ');
				loop++;
			}
			hash = size - space;
			loop = 0;
			while (loop < hash)
			{
				_putchar('#');
				loop++;
			}
			_putchar('\n');
			next++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
