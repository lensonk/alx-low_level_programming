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
		for (y = 0; y <= 9; y++)
		{
		n = x * y;
		if (n <= 9)
		{
		_putchar(n % 10 + '0');
		if (y < 9)
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		if (y == 9)
			_putchar('\n');

		}

		else
		{

		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (y < 9)
		_putchar(',');
		_putchar(' ');
		if (y == 9)
		_putchar('\n');
		}
		}
	}
}
