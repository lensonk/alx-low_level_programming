#include "main.h"

/**
 * _pow_recursion- requrns the value of x raised to power of y
 * @x: integer
 * @y: power int
 * return: int
 * @(x, y-1): return value of _pow_recursion
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x *  _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}