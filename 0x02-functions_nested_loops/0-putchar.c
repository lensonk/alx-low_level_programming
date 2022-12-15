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
	char str[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
	putchar(i);
	i++;
	}

	{
	putchar('\n');
	}
	return (0);
}
