#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry
 *
 * Description:print last digit
 *
 * Return:always 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* assignment */

	i = (n % 10);

	if (1 > 5)
	{

		printf("The last digit of %d is %d and is greater than 5\n", n, i);
	}

	if (i == 0)
	{

		printf("The last digit of %d is %d and is 0\n", n, i);
	}

	if (i < 6 && i != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}

	return (0);
}
