#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @s: pointer to a character
 * @b: constant byte to fill with
 * @n: the integer number of first bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
