#include "main.h"

/**
 * jack_bauer - prints the time
 */
void jack_bauer(void)
{
	int pre_hour = '0';
	int post_hour = '0';
	int pre_minute = '0';
	int post_minute = '0';

	while (pre_hour <= '2')
	{
		while (post_hour <= '9')
		{
			while (pre_minute < '6')
			{
				while (post_minute <= '9')
				{
					_putchar(pre_hour);
					_putchar(post_hour);
					_putchar(':');
					_putchar(pre_minute);
					_putchar(post_minute);
					_putchar('\n');
					if (pre_hour == '2' && post_hour == '3'
					&& pre_minute == '5' && post_minute == '9')
					{
						post_hour = '9';
						pre_hour = '3';
						post_minute = '6';
						break;
					}
					post_minute++;
				}
				post_minute = '0';
				pre_minute++;
			}

			pre_minute = '0';
			post_hour++;
		}
		post_hour = '0';
		pre_hour++;
	}
}
