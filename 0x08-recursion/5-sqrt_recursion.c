#include "main.h"


/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: the integer
 * return: return int or -1 otherwise
 * @I: return value of non natuural square roots
 */

int _sqrt_recursion(int n)
{
	int i = n / 2;

	i = (n / i + i) / 2;

	if (i * i == n)
	{
		return (i);
	}
	else
	{
	return (-1);
	}
}
