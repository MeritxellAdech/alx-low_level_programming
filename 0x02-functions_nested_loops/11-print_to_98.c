#include "main.h"

/**
 * print_to_98 - prints all natural numbers from
 * @n to the number 98.
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
	int counter = 0;

	if (n <= 98)
	{
		for (counter = n; counter < 98; counter++)
		{
			printf("%d, ", counter);
		}
	}
	else
	{
		for (counter = n; counter > 98; counter--)
		{
			printf("%d, ", counter);
		}
	}
	printf("98\n");
}
