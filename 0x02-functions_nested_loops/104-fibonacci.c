#include <stdio.h>

/**
 * main - prints the first 90 fibonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	long prev = 1;
	long current = 2;
	long temp;
	int loop = 1;

	printf("%lu, %lu", prev, current);
	while (loop <= 96)
	{
		temp = current;
		current += prev;
		prev = temp;
		printf(", %lu", current);
		loop++;
	}
	printf("\n");
	return (0);
}
