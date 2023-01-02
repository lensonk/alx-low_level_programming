#include "main.h"

/**
 * print_line-draws a straight line in the terminal
 * @n: The number of times character '_' is to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;
		for (; i <= n; i++)
		{
			if (n >= 0)
			{
				_putchar('_');
			}
			else
			{
			_putchar('\n');
			}
		}
		_putchar('\n');
}
