#include <stdio.h>

/**
 * main - amazing
 * Return: 0 success
 */
int main(void)
{
	int num;

	printf("%d", 1);
	for (num = 2; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");
	return (0);
}
