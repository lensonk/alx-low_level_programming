#include "main.h"

/**
 * print_alphabet_x10-entry
 *
 * Description: print lowercase alphabets 10 times
 *
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
		putchar(i);
		i++;
		}
	putchar('\n');
	n++;
	}
}
