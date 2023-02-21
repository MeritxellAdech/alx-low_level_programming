#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int control = 0;

	while (control < 10)
	{
		int position = 0;

		while (position < 26)
		{
			char lower = alphabets[position] + 32;

			_putchar(lower);
			position++;
		}
		_putchar('\n');
		control++;
	}
}
