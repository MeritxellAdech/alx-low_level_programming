#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @value: is the parameter
 *
 * Return: last digit value
 */
int print_last_digit(int value)
{
	int last = 0;

	if (value < 0)
	{
		int abs;

		last = value % 10;
		abs = last * -1;
		_putchar(abs + 48);
		return (abs);
	}
	last = value % 10;
	_putchar(last + 48);
	return (last);
}
