#include <stdio.h>

/**
 * main - prints all possible combinations
 * of two-digit numbers
 *
 * Return: on success(0)
 */
int main(void)
{
	int l1, l2, r1, r2;

	for (l1 = 48; l1 <= 57; l1++)
	{
		for (l2 = 48; l2 <= 57; l2++)
		{
			r2 = l2 + 1;
			for (r1 = l1; r1 <= 57; r1++)
			{
				for (; r2 <= 57; r2++)
				{
					putchar(l1);
					putchar(l2);
					putchar(' ');
					putchar(r1);
					putchar(r2);

					if (l1 == 57 && l2 == 56 && r1 == 57 && r2 == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				r2 = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
