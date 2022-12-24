#include "main.h"

/**
 * *_strcat - append the source string at the end c of the destination string
 * @src: source string to be appended
 * @dest: destination string to append to
 * Return: Return dest
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest[0];

	while (*dest != '\0')
	{
		dest++;
	}

	*dest = *src;

	while (*src != '\0')
		{

		src++;
		dest++;
		}

		*dest = '\0';

		return (d);
}
