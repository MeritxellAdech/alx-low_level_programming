#include <stdio.h>

/**
 * main - Display the numbers in base 16
 * in lowercases
 *
 * Return: the value 0
 **/

int main(void)
{
	char numbers[16] = "0123456789abcdef";

	int index = 0;

	while (index < 16)
	{
		putchar(numbers[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
