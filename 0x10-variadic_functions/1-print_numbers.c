#include "variadic_functions.h"

/**
 * print_numbers-print numbers followed by a new line
 * @seperator: string to be printed between numbers
 * @n:the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ls, int);
	printf("%d", num);
	if (i < n - 1 && seperator)
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ls);
}
