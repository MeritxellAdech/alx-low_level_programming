#include <stdio.h>

/**
 * main - printing all single digits numbers
 *
 * Return: on success (0)
 */
int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
