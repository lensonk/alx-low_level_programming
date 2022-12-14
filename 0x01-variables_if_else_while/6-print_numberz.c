#include <stdio.h>
/**
 *main-print all single digits numbers of base 10
 *using putchar only
 *
 * Description:Print all single digit numbers of base 10 using putchar
 * only and add a new line at the end
 *
 *Return:always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	putchar(n % 10 + '0');
	putchar('\n');
	return (0);
}
