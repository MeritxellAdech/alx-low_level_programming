#include <stdio.h>

/**
 * main - Display different number
 * combinations of three digits
 *
 * Return: the value 0
 *
 **/
int main(void)
{
	int firstdigit = '0';
	int seconddigit;
	int thirddigit;

	while (firstdigit < '9')
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= '9')
		{
			thirddigit = seconddigit + 1;
			while (thirddigit <= '9')
			{
				putchar(firstdigit);
				putchar(seconddigit);
				putchar(thirddigit);
				if (firstdigit != '7')
				{
					putchar(',');
					putchar(' ');
				}
				thirddigit++;
			}
			seconddigit++;
		}
		firstdigit++;
	}
	putchar('\n');
	return (0);
}
