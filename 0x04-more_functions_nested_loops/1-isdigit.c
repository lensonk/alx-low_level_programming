#include "main.h"

/**
 * int _isdigit - check for a digit 0 -9
 * @c: Digit to check
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
