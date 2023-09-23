#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 * except for 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n >= 48 && n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
