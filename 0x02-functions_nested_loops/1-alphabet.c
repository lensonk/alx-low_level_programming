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
		char i;

		i = 97;

		while (i < 122)

		{
		putchar(i);
		i++;
		}

		{
		putchar('\n');
		}
	return (0);
}
