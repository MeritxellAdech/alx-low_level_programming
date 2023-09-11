#include <stdio.h>

/**
 * main - printing in lowercase
 *
 * Return: on success (0)
 */
int main(void)
{
	int lower = 97;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
