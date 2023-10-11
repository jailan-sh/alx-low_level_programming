#include "search_algos.h"
/**
 * binary_search - function to find certain value
 * @array: data to be searched
 * @size: size of data
 * @value: what we are looking for
 * Return: value if present otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned long int r = size - 1;
	unsigned long int l = 0;
	unsigned long int mid, i;

	if (array == NULL)
	{
	return (-1);
	}
	while (l <= r)
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[r]);
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
