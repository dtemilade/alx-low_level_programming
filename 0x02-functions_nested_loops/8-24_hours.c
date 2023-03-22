#include "main.h"
/**
 * jack_bauer - prints each and every minute of Jack Bauer’s day
 * beginning from 00:00hrs to 23:59hrs
 */
void jack_bauer(void)

{
	int prnt_hrs, prnt_mins;

	prnt_hrs = 0;

	while (prnt_hrs < 24)
	{
		prnt_mins = 0;

		while (prnt_mins < 60)

		{
			_putchar((prnt_hrs / 10) + '0');
			_putchar((prnt_hrs % 10) + '0');
			_putchar(':');
			_putchar((prnt_mins / 10) + '0');
			_putchar((prnt_mins % 10) + '0');
			_putchar('\n');
			prnt_mins++;
		}
		prnt_hrs++;
	}
}
