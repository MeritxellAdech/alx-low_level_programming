#include "main.h"

/**
 * num_to_binary - converts any given number to binary
 *
 * @num: the given number
 */
void num_to_binary(unsigned long int num)
{
	if (num == 0)
		return;
	num_to_binary(num >> 1);
	_putchar((num & 1) + '0');
}

/**
 * print_binary - print binary representation
 * of the given number
 *
 * @num: the given number
 */
void print_binary(unsigned long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	num_to_binary(num);
}
