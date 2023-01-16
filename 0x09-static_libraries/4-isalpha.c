#include "main.h"

/**
 * _isalpha-checksfor alphabetic character
 * @c:character to be evaluated
 *
 * Return: return 1 if its a letter and 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
