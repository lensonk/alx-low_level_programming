#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98 followed by a new line
 * @n: initial natural number to be printed
 * Return: always 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i >= 0 && i <= 98; i++)
			putchar(i % 10 + '0');
	}
	else
	{
		for (i = n; i >= 98; i--)
			putchar(i % 10 + '0');
	}
	putchar('\n');
}

