#include "main.h"

/**
 * print_sign-Print sign of a number.
 *@n: the number to be evaluated
 *
 * Return: return 1 if greater than zero, 0 if zero and -1 if less than zero.
 */
int print_sign(int n)
{

	if (n < 0)
	{
	_putchar('+');
	}
	return (1);

	if (n == 0)
	{
	_putchar('0');
	}
	return (0);

	if (n > 0)
	{
	_putchar('-');
	}
	return (-1);
}
