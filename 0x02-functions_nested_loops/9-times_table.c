#include "main.h"

/**
 * times_table-print the nine times tablestarting with 0
 *
 * Description: prints nine times table
 *
 * Returns: always 0
 */
void times_table(void)
{
	int y;
	int x;
	int n;

	x = 0;
	y = 0;

	while (y <= 9)
	{
	for (x = 0; x <= 9; x++)
	{
		n = x * y;
	putchar(n/10);
	putchar((n%10) + '0');
	putchar(',');
	}
	{
	putchar('\n');
	}
	y++
	}

	for (y = 0; y <= 9; y++)
	{
	putchar((n%10) + '0');
	}
}
