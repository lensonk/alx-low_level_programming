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

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src < src[n - 1])
	{

		*dest = *src;

		dest++;
		src++;
	}
	return (d);
}
