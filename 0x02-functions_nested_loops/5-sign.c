#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 *
 * @n: is the parameter of the function
 *
 * Return: 1 and prints + if n>0, 0 if n=0, - if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
