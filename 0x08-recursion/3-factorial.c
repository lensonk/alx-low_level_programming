#include "main.h"

/**
 * factorial-returns factorial of a given number
 * @n: given integer
 * Return: factorial
 */

int factorial(int n)
{
	int f;

	if (n <= 1)
	{
		return (1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);
}
