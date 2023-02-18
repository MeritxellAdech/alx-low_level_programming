#include <stdio.h>

/**
 * main - Display all alphabets in lower
 * cases ignoring the alphabet q and e
 *
 * Return: the value 0
 **/

int main(void)
{
	char index = 'a';

	while (index < (97 + 26))
	{
		if (index != 'q' && index != 'e')
			putchar(index);
		index++;
	}
	putchar('\n');
	return (0);
}
