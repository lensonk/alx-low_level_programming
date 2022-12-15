#include "main.h"

/**
 * main-Entry
 *
 * putchar: Prints _putchar ending with new line
 *
 * Return: always 0
 */

int main(void)
{
	char *i = "_putchar";

	while (*i != '\0')
	{
	putchar(*i);
	i++;
	}

	{
	putchar('\n');
	}
	return (0);
}
