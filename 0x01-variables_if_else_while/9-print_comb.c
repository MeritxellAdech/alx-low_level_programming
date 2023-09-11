#include <stdio.h>

/**
 * main - printing all possible combination of single digits
 *
 * Return: on success (0)
 */
int main(void)
{
	int single_dig = 48;

	while (single_dig < 58)
	{
		putchar(single_dig);
		if (single_dig < 57)
		{
			putchar(',');
			putchar(' ');
		}
		single_dig++;
	}
	putchar('\n');
	return (0);
}
