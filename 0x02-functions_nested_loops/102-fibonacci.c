#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci
 * numbers starting from 1
 *
 * Return: Always 0
 */
int main(void)
{
	long prev = 1;
	long current = 2;
	long temp;
	int total_numbers_used = 1;

	printf("%lu, %lu", prev, current);
	while (total_numbers_used <= 48)
	{
		temp = current;
		current += prev;
		prev = temp;
		printf(", %lu", current);
		total_numbers_used++;
	}
	printf("\n");
	return (0);
}
