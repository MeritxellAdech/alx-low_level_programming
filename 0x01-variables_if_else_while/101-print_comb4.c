#include <stdio.h>

/**
 * main - prints all possible different combination
 * of two digits
 *
 * Return: on success(0)
 */
int main(void)
{
	int left = 48, right, middle;

	while (left <= 56)
	{
		for (middle = (left + 1); middle <= 57; middle++)
		{
			for (right = (middle + 1); right <= 57; right++)
			{
				putchar(left);
				putchar(middle);
				putchar(right);
				if (left != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		left++;
	}
	putchar('\n');
	return (0);
}
