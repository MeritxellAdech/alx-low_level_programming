#include "main.h"

/**
 * print_square - prints squares on the terminal
 *
 * @size: the dimension of the square
 * Return: nothing
 */
void print_square(int size)
{
	int width = 0, height;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (; width < size; width++)
	{
		height = 0;
		for (; height < size; height++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
