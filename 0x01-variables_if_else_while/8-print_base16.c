#include <stdio.h>

/**
 * main - printing all numbers of base 16 in lowercase
 *
 * Return: on success(0)
 */
int main(void)
{
	int hex = 48;

	while (hex < 103)
	{
		if (hex == 58)
		{
			hex += 39;
			continue;
		}
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
