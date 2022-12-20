#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;

	*b = i;
}
