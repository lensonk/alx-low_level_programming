#include "main.h"

/**
 * reset_to_98- takes a pointer to an int as a parameter
 * and updates the value it points to to 98
 *@n: The pointer to update value of integer
 *
 * Return: alyaws 0
 */

void reset_to_98(int *n)
{
	int j;

	n = &j;

	j = 98;

	reset_to_98(n);

}
