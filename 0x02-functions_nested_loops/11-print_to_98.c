#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98 followed by a new line
 * @n: initial natural number to be printed
 * ReIturn: always 0
 */

void print_to_98(int n)
{
	int i;

	while(i < 98) 
	{
	printf("%d, ", i);
	i++;
	putchar('\n');
	}
}
