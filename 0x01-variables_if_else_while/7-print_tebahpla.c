#include <stdio.h>

/**
 * main - printing the alphabet in reverse and lowercase
 *
 * Return: on success (0)
 */
int main(void)
{
	int lower = 122;

	while (lower > 96)
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
