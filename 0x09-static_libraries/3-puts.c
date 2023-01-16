#include "main.h"

/**
 * _puts- Print a string to stdout followed by a new line
 * @str: string to be printed
 *
 * Return: The string
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')

	{
	putchar(str[x]);
	x++;
	}
	putchar('\n');
}
