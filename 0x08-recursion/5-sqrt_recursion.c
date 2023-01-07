#include "main.h"


/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n:the integer
 * @i: root integer
 * Return:int or -1 otherwise
 *
 */

int _sqrt_recursion(int i, int n)
{

	i = (0 + n) / 2;

	if ((i * i <= n) && ((i + 1) * (i + 1)) > n)
	{
	return (i);
	}
	else if (i * i > n)
	{
	return (_sqrt_recursion(i /2 , n));
	}
	else if (i * i < n)
	{
	return (_sqrt_recursion(i + 1, n));
	}
	else
	{
	return (-1);
	}
}
