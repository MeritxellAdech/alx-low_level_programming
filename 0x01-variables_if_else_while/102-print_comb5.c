#include <stdio.h>
/**
 * main - Display possible combinations of
 * two two-digit numbers.
 *
 * Return: The value 0
 */
int main(void)
{
	int thousands = '0', hundreds = '0', tens = '0', ones = '1';

	while (thousands <= '9')
	{
		while (hundreds <= '9')
		{
			tens = thousands;
			ones = hundreds + 1;
			while (tens <= '9')
			{
				while (ones <= '9')
				{
					putchar(thousands);
					putchar(hundreds);
					putchar(' ');
					putchar(tens);
					putchar(ones);
					if (thousands == '9' && hundreds == '8' && tens == '9' && ones == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
					ones++;
				}
				ones = '0';
				tens++;
			}
			hundreds++;
		}
		hundreds = '0';
		thousands++;
	}
	putchar('\n');
	return (0);
}
