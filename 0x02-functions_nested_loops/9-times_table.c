#include "main.h"

/**
 * times_table-print the nine times tablestarting with 0
 *
 * Description: prints nine times table
 *
 * Returns: always 0i
 */
void times_table(void)
{
	int y;
	int x;
	int n;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 0; y <= 9; y++)
		{
		_putchar(',');
		_putchar(' ');

		n = y * x;

		if (n <= 9)
		{
			_putchar(' ');

		}

		else
		{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		}
		_putchar('\n');
		}

	}
}
