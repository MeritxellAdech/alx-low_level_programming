#include <stdio.h>

/**
 * main - Display all alphabets in
 * lowercases then uppercases.
 *
 * Return: the value 0
 */

int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while (index < 26)
	{
		putchar(letters[index]);
		index++;
	}
	index = 0;
	while (index < 26)
	{
		putchar(letters[index] - 32);
		index++;
	}
	putchar('\n');
	return (0);
}
