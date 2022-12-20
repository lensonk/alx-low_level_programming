#include "main.h"

/**
 * print_rev - print string in reverse followed by a new line
 *
 * @s: string to be printed
 */


void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;


	for (j = i - 1; j >= 0; j--)
	{
	putchar(s[j]);
	}

	putchar('\n');

}
