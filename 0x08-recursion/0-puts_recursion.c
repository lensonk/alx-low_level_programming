#include "main.h"

/**
 * _puts_recursion-prints a string
 * @s: the strin to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
		_putchar('\n');
}
