#include <stdio.h>

/**
 * main - Print alphabets in their
 * lowercase characters.
 *
 * Return: the value 0
 **/
int main(void)
{
	char letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x = 0;

	for (x = 0; x < 26; x++)
	{
		putchar(letters[x] + 32);
	}
	putchar('\n');
	return (0);
}
