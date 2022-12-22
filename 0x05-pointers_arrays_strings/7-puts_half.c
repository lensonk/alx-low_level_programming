#include "main.h"

/**
 * puts_half-print half of a string and a new line
 * @str:string to be printed
 */

void puts_half(char *str)
{
	int n = 0;
	int i;

	if (n - 1 % 2 != 0)
	{
	i = n / 2;

	for (i = n / 2; str[i] !=  '\0'; i++)
		putchar(str[i]);
	}

	else
	{

	i =  (n - 1 / 2);

	for (i = (n - 1 / 2); str[i] != '\0'; i++)

		putchar(str[i]);
	}
}
