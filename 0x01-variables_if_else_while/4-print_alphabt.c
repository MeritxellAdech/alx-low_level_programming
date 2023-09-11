#include <stdio.h>

/**
 * main - printing in lowercase except e and q
 *
 * Return: on success (0)
 */
int main(void)
{
	int lower = 97;

	while (lower < 123)
	{
		if (lower == 101 || lower == 113)
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
