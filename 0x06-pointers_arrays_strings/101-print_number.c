#include "main.h"

/**
 * print_number - prints a number
 *
 * @num: the given number
 */
void print_number(int num)
{
	int temp = 0, dig_count = 0, copy = 0;
	int index = 1, copy_index = 0;

	copy = temp = num;
	if (num < 0)
	{
		num = ((num * -1) - 1);
		_putchar('-');
	}
	while (copy != 0)
	{
		dig_count++;
		copy /= 10;
	}
	while (index <= dig_count)
	{
		copy = num;
		copy_index = index;

		while (copy_index < dig_count)
		{
			copy /= 10;
			copy_index++;
		}
		if (temp < 0 && index == dig_count)
			_putchar(((copy % 10) + 48) + 1);
		else
			_putchar((copy % 10) + 48);
		index++;
	}
	if (dig_count == 0)
		_putchar('0');
}
