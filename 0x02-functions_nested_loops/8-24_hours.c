#include "main.h"

/**
 * jack_bauer-print every minute of the day starting from 00:00 to 11:59
 *
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int m;
	int h = 0;

	while (h < 23)
	{
		m = 0;

		while (m < 59)
		{
			if (m < 10)
			{
			_putchar(h);
			putchar(':');
			_putchar('0');
			_putchar(m);
			putchar('\n');
			}
			else
			{
			_putchar(h);
			putchar(':');
			_putchar(m);
			putchar('\n');
			}
			m++;
		}
	}
		h++;
}
