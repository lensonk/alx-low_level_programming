#include "function_pointers.h"

/**
 * array_iterator-executes a function given as a parametor on each element
 * of an array
 * @array: arrays
 * @size: size of an array
 * @action:function given as a parameter
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
