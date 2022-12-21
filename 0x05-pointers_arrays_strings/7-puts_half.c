#include "main.h"

/**
 * puts_half-print half of a string and a new line
 * @str:string to be printed
 */

void puts_half(char *str)
{
	int s;
	int i;

	s = 0;

	while (str[s] != '\0')
	{
		++s;
	}


	if (s + 1 % 2 != '0')
	{
		i = (s - 1) / 2;
	}

	else
	{
		i = (s / 2);
		i++;
	}
	for (s = i; str[s] != '\0'; s++)
	{
		putchar(str[s]);
		putchar('\n');
	}
}
