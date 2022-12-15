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
	char i = 'a';
	int n;

	n = 0;
	while (i <= 'z')
	{
		while (n < 10)
		{
		putchar(i);
		n++;
		}

		{
		putchar('\n');
		}
		i++;
	}
}
