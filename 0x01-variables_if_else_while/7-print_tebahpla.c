#include <stdio.h>

/**
 * main - Display lowercase characters
 * in reverse order.
 *
 * Return: the value 0
 */

int main(void)
{
	int character = 97 + 25;

	while (character >= 97)
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
