#include <stdio.h>

/**
 * main - Display a range of numbers
 * from 0 to 9.
 *
 * Return: the value 0
 **/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
