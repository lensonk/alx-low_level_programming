#include "main.h"

/**
 * print_times_table - print n times table starting with 0
 *@n: number of times table to print
 */

void print_times_table(int n)
{
	int i;
	int t;

	for (n = 0; n >= 0 && n <= 15; n++)
	{
		putchar('0');

	for (i = 1; i >= 1 && i <= 15; i++)
	{
		putchar(',');
		putchar(' ');

		t = n * i;

		putchar(t / 10 + '0');
		putchar(t % 10 + '0');
	}
	putchar('\n');
	}
}
