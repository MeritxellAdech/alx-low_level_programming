#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	int num_of_digits = 0, clone_n = n,
	    first_digit_of_n, digits_of_n = 1, original_n;

	original_n = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = (n * -1) - 1;
	}
	while (clone_n != 0)
	{
		num_of_digits++;
		clone_n /= 10;
	}
	while (digits_of_n <= num_of_digits)
	{
		clone_n = n;
		first_digit_of_n = digits_of_n;
		while (first_digit_of_n < num_of_digits)
		{
			clone_n /= 10;
			first_digit_of_n++;
		}
		if (original_n < 0 && digits_of_n == num_of_digits)
		{
			_putchar(((clone_n % 10) + 48) + 1);
		}
		else
		{
			_putchar((clone_n % 10) + 48);
		}
		digits_of_n++;
	}
}
