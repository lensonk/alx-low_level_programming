#include "main.h"

/**
 * _strlen-return the length of a string
 *
 *
 * @s: string length to be returned
 *
 * Return: strlen
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	for (; *s++;)
	i++;

	return (i);
}
