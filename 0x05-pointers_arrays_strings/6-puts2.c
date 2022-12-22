#include "main.h"

/**
 * puts2-print every othercharacter of a string
 * @str: the sting of characters to be printed
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		putchar(str[n]);
	{

		putchar('\n');
	}

}

