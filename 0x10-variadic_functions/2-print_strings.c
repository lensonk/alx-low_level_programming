#include "variadic_functions.h"

/**
 * print_strings-print strings followed by a new line
 * @seperator: strng to be printed between strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ls;

	va_start(ls, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(ls, char *);
			if (s)
			printf("%s", s);
			else
				printf("nil");
		if (i < n - 1 && seperator)
			printf("%s", seperator);
		}
	printf("\n");
	va_end(ls);
}

