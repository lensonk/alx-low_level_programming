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
	int j;
	char x;

	n = 0;

	while (s[n] != '\0')
	{
	n++;
	}

	i = n - 1;

	for (j = 0; i >= 0 && j < i; i--, j++)
	{
		x = s[j];

		s[j] = s[i];

		s[i] = x;
	}
}
