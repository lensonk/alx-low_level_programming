#include "main.h"

/**
 * more_numbers-prints 10 times the numbers 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	while (j < 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
