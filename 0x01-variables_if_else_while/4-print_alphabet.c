#include <stdio.h>
/**
 * main-Entry point
 *
 * Description: print lowercase alphabet apart from e & q
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'e'; i++)
	for (i = 'f'; i <= 'q'; i++)
	for (i = 'r'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
