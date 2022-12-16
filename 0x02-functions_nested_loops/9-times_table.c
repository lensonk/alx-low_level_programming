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

	x = 0;
	y = 0;

	n = x * y;

	while (n != 80)

	{
	for (x = 0; x <= 9; x++)
	{
	putchar(n / 10);
	putchar((n % 10 + '0');
	putchar(',');
	}
	putchar('\n');
	y++;
	}
}
