#include "main.h"
/**
 * main-Entry
 *
 * Description: print the alphabets in lower case followed by a new line
 * can use putchar only twice
 *
 * Return:always 0
 */

int main(void)
{

	/* variable defination */
		char i = 'a';

		while (i < 'z')

		{
		putchar(i);
		i++;
		}

		{
		putchar('\n');
		}
	return (0);
}
