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
	while (*s)
	{
		{
		if (*s == c)
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
