#include "main.h"

/**
 * print_times_table - print n times table starting with 0
 *@n: number of times table to print
 */

void print_times_table(int n)
{
	int i;
	int t;
	int j;

	if (n >= 0 && n < 15)
	{

	for (j = 0; j <= n; j++)
	{
		putchar('0');

	for (i = 1; i <= n; i++)
	{
		putchar(',');
		putchar(' ');

		t = i * j;
		if (t <= 99)
			putchar(' ');
		if (t <= 9)
			putchar(' ');
		if (t >= 100)
		{
		putchar(t / 100 + '0');
		putchar((t / 10) % 10 + '0');
		}
		else if (t >= 10 && t <= 99)
		{
			putchar(t / 10 + '0');
		}
			putchar(t % 10 + '0');
		}
		putchar('\n');
		}
	}
}
