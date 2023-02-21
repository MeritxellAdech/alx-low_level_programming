# include "main.h"

/**
 * print_alphabet - prints in alphabet in lowercase.
 */
void print_alphabet(void)
{
	char letter[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int control = 0;

	while (control < 26)
	{
		char lowercase = letter[control] + 32;

		_putchar(lowercase);
		control++;
	}
	_putchar('\n');
}
