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
		for (m = 0; m <= 59; m++)
		{
			if (m <= 9)
			{
			_putchar(h);
			putchar(':');
			_putchar('0');
			_putchar(m);
			}
			else
			{
			_putchar(h);
			putchar(':');
			_putchar(m);
			}
			putchar('\n');
		}
	}
		h++;
}
