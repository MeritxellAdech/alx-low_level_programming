#include "main.h"

/**
 * main - Fizz-Buzz test.
 *
 * Return: on success 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", (i < 100 ? "FizzBuzz " : "FizzBuzz"));
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("%s", (i < 100 ? "Buzz " : "Buzz"));
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("%s", (i < 100 ? "Fizz " : "Fizz"));
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");

	return (0);
}
