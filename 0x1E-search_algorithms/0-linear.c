#include "search_algos.h"
/**
 * linear_search - function to find certain value
 * @array: data to be searched
 * @size: size of data
 * @value: what we are looking for
 * Return: value if present otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
