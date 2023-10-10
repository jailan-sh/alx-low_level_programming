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
	unsigned long int l, i = 0;
	unsigned long int mid = 0;

	if (array == NULL)
	{
	return (-1);
	}
	while (l < r)
	{
		mid = l + r / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			printf("Searching in array:");
			for (i = 0; i < r; i++)
			{
				printf("%d, \n",array[i]);
			}
			l = mid + 1;
		}
		else
		{
			printf("Searching in array: ");
			for (i = 0; i < r; i++)
			{
				printf("%d, \n",array[i]);
			}
			r = mid - 1;
		}
	}
	return (-1);
}
