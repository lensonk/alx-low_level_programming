#include "main.h"


/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n:the integer
 * Return:int or -1 otherwise
 *
 */

int _sqrt_recursion(int n)
{
	int i;

	i = (i + n / i) / 2;

	if (i * i == n);
	{
		return (i);
	}
	else
	{
	return (-1);
	}
}
