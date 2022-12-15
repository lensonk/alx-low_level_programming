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
	char a;

	for (a = 'a'; a <= 'z'; a++)

	{
	putchar(a);
	}
	{
	putchar('\n');
	}
	return (0);
}
