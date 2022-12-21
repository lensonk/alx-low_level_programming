#include "main.h"

/**
 * print_array - print n elements of array
 * @a: integer value to be printed
 * @n: integert rep number of array elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)

	if (i < n - 1)
		{

		printf("%d, ", a[i]);

		}
	else
		{
		printf("%d", a[i]);
		printf("\n");
		}
}
