#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant integer
 * Return:0 if n == 0 else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
		sum += va_arg(l, int);
	va_end(l);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sum);
	}
}

