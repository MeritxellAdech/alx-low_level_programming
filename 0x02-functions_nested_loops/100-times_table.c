#include <stdio.h>

/**
 * print_times_table - Print the n tiems
 * table startingwith 0
 *
 * @n: the number for the times table
 */
void print_times_table(int n)
{
	int row = 0, col = 1;

	if (n > 15 || n < 0)
	{
		return;
	}
	while (row <= n)
	{
		printf("0");
		while (col <= n)
		{
			if (col <= n)
				printf(",");
			if (row * col < 10)
			{
				printf("   ");
			}
			else if (row * col < 100)
			{
				printf("  ");
			}
			else
				printf(" ");
			printf("%d", (row * col));
			col++;
		}
		col = 1;
		row++;
		printf("\n");
	}
}
