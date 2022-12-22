#include "main.h"

/**
 * *_strcat - append the source string at the end c of the destination string
 * @src: source string to be appended
 * @ dest: destination string to append to
 * Return: Return *dest
 */

char *_strcat(char *dest, char *src)
{

	while (*dest < '\0')
	{
		dest++;
	}
			while (*src < '\0')
			{
			*dest = *src;

			src++;
			dest++;
			}

		return (dest);
}
