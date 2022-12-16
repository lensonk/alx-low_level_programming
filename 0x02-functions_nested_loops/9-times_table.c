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

		n = x * y;
	for (x = 0; x <= 9; x++)
	{
		putchar('\n');
	}

		for (y = 1; y <= 9; y++)
	{
	putchar((n / 10);
	putchar((n % 10) + '0');
	if (x < 9)
	putchar(',');
	}
}
