#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98 followed by a new line
 * @n: initial natural number to be printed
 * ReIturn: always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	while(n <= 98) 
	printf("%d, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("\n");
}
