#include <stdio.h>

/**
 * main - printing all single digits numbers
 *
 * Return: on success (0)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
