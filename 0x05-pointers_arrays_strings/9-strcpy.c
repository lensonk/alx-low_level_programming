#include "main.h"

/**
 * *_strcpy- copy a string pointed to by a pointer to a buffer
 * pointed to by another pointer including the terminating null byte
 * @src: characters to copy
 * @dest:string character to check
 * Return:dest
 */


char *_strcpy(char *dest, char *src)
{
		int i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
		return (dest);
}
