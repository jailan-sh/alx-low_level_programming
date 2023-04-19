#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - given as a parameter on each
 * element of an array
 * @array : argument od main function
 * @size : size of the array
 * @action : function pointer to print elem. of array
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
