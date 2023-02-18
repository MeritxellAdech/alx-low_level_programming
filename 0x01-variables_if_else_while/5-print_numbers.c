#include <stdio.h>

/**
 * main - Display single numbers from 0
 * through to 9
 *
 * Return: the value 0
 **/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
