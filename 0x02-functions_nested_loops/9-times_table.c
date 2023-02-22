#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int multiples[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int result;
	int i, j, unit, tens;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + 48);
		for (j = 1; j < 10; j++)
		{
			result = numbers[i] * multiples[j];
			unit = result % 10;
			tens = result / 10;
			if (result < 10)
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(tens + 48);
			}
			_putchar(unit + 48);
		}
		_putchar('\n');

	}
}
