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
	n = (y * x);

	for (x = 0; x <= 9; x++)
	{
		putchar(n);
		putchar(',');
	}
	{
		putchar('\n');
	}
		for (y = 0; y <= 9; y++)
		{
			putchar(n);
		}
}
