#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to reverse
 *
 */

void rev_string(char *s)
{
	int i;
	int n;

	while (s[n] != '\0')
	{
	n++;
	}

	i = n - 1;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%c", i);
		i++;
	}
}
