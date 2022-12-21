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
		int i;

		for (i = 0; src[i] <= '\0'; i++)
			dest[i] = src[i];
		return (dest);
}
