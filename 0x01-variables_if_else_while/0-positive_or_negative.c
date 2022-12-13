#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main-Entry point
*
* Description:print random number whether negative or positive
*
* return:always 0
*
*/

int main(void)
{
	/* declaration */

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 0)
	{
	printf("is positive %d\n", n);
	}
	else if (n < 0)
	{
	printf("is negative %d\n", n);
	}
	else
	{
	printf("is zero %d\n", n);
	}

	return (0);
	}
}
