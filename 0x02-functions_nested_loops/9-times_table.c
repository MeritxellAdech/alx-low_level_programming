#include "main.h"

/**
 * times_table - prints the 9 times taable, starting from 0
 */
void times_table(void)
{
	int count, times, table = 0, fnum = 0, snum = 0;

	for (count = 0; count < 10; count++)
	{
		for (times = 0; times < 10; times++)
		{
			table = count * times;
			fnum = table / 10;
			snum = table % 10;
			if (table > 9)
			{
				_putchar(fnum + 48);
				_putchar(snum + 48);
			}
			else
			{
				_putchar(table + 48);
			}
			if (times <= 8)
			{
				_putchar(',');
				_putchar(' ');
				if (count * (times + 1) < 10)
					_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
