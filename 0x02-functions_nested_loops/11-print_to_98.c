#include <stdio.h>

/**
 * print_to_98 - Display all natural numbers
 * starting from n to the number 98
 *
 * @n: the specified number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
		printf("\n");
		return;
	}
	while (n >= 98)
	{
		printf("%d", n);
		if (n > 98)
			printf(", ");
		n--;
	}
	printf("\n");
}
