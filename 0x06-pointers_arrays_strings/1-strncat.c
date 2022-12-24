#include "main.h"

/**
 * *_strncat - concetenates two strings and uses up to n bytes of the source
 * string
 * @dest: destination string
 * @src: source string
 * @n: the number of characters from source string to be concetenated
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{

		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';
	return (d);
}
