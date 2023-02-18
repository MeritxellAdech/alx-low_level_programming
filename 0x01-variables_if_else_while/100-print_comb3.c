#include <stdio.h>
/**
 * main - Display different
 * combinations of two digits.
 *
 * Return: the value 0
 *
 **/
int main(void)
{
	int leftdigit = '0';
	int rightdigit;

	while (leftdigit < '9')
	{
		rightdigit = leftdigit + 1;
		while (rightdigit <= '9')
		{
			putchar(leftdigit);
			putchar(rightdigit);
			if (leftdigit < '8')
			{
				putchar(',');
				putchar(' ');
			}
			rightdigit++;
		}
		leftdigit++;
	}
	putchar('\n');
	return (0);
}
