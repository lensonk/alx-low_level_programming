#include "main.h"

/**
 * *_strchr-locates a character in a string
 * @*s:character pointer
 * @c:character to be located
 * @s: string pointed to
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s != c)
			s++;
	if (*s == c)
		{
			return (s);
		}
	else
	{
			return (NULL);
	}
}
