#include <stdio.h>

/**
 * main - printing in lowercase
 *
 * Return: on success (0)
 */
int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
