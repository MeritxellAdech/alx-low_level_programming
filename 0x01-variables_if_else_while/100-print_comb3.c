#include <stdio.h>

/**
 * main - prints all possible different combination
 * of two digits
 *
 * Return: on success(0)
 */
int main(void)
{
	int left = 48, right;

	while (left <= 57)
	{
		while (right <= 57)
		{
			if (left > right)
			{
				right++;
				continue;
			}
			if ((left < right) && (left <= 56 && right <= 57))
			{
				putchar(left);
				putchar(right);
				if (left != 56 || right != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			right++;
		}
		left++;
		right = 49;
	}
	putchar('\n');

	return (0);
}
