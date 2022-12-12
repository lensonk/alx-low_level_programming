#include <stdio.h>
/**
* main-Entry point
*
* Description: print the size of various data types
* data type character, integer, long integer, long long
* integer and float.
* for diferent computers depending on th compiller
*
* Return: always 0
*/

int main(void)
{
	/**
	 * print the sizes of various data types in different computers
	 *
	 */
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
