#include <stdio.h>

/**
 * main - finds the sum of all even numbers 
 * within 4000000 numbers
 *
 * Returns: 0 success
 */
int main(void)
{
	long prev = 1;
	long current = 2;
	long temp;
	long sum_even = 0;

	while (current <= 4000000)
	{
                if (current % 2 == 0)
		{
			sum_even += current;
		}
		temp = current;
		current += prev;
		prev = temp;
	}
	printf("%lu", sum_even);
	printf("\n");
	return (0);
}
