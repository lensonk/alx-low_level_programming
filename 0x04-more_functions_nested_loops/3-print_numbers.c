#include "main.h"

/**
 * print_numbers-print numbers from 0-9 followed by a new line
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
