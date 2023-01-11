#include "main.h"

/**
 * _strspn- get the length of a prefix substring
 * @s: string
 * @accept: string
 * Return:number of bytes in the initial segment of s which consist
 * of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					n++;
			}
		}
		else
			return (n);
		}
		return (n);
}
