#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int Hl, Hr, Ml, Mr;

	for (Hl = 0; Hl <= 2; Hl++)
	{
		for (Hr = 0; Hr <= 9; Hr++)
		{
			if (Hl == 2 && Hr == 4)
				break;
			for (Ml = 0; Ml <= 5; Ml++)
			{
				for (Mr = 0; Mr <= 9; Mr++)
				{
					_putchar(Hl + 48);
					_putchar(Hr + 48);
					_putchar(':');
					_putchar(Ml + 48);
					_putchar(Mr + 48);
					_putchar('\n');
				}
			}
		}
	}
}
