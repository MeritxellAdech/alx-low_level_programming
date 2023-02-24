#include "main.h"

/**
 * more_numbers - prints 10x the numbers from 0 - 14
 */
void more_numbers(void)
{
	char range[20] = "01234567891011121314";
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		while (j < 20)
		{
			_putchar(range[j]);
			j++;
		}
		_putchar('\n');
	}
}
