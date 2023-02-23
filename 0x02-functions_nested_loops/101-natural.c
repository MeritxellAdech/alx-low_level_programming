#include <stdio.h>

/**
 * main - Print all natural numbers in a range and
 * display the sum for those numbers
 *
 * Return: 0 success
 */
int main(void)
{
	int sum = 0;
	int natural_number = 3;

	while (natural_number < 1024)
	{
		if ((natural_number % 3 == 0) || natural_number % 5 == 0)
		{
			sum += natural_number;
		}
		natural_number++;
	}

	printf("%d\n", sum);
	return (0);
}
