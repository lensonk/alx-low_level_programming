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
	int h;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
