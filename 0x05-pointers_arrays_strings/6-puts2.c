#include "main.h"

/**
 * puts2-print every othercharacter of a string
 * @str: the sting of characters to be printed
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n != '\0'; n++)
		if (n % 2 == 0)
	{
		putchar(str[n]);
	
		putchar('\n');
	}
}

