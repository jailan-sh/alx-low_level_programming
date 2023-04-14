#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 * @min: minimal value
 * @max: maximum value
 *
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */

int *array_range(int min, int max)
{
	int *all;
	int i;
	int value;

	if (min > max)
		return (NULL);
	all = malloc((max - min + 1) * sizeof(int));
	if (all == NULL)
		return (NULL);
	value = min;
	for (i = 0; i <= (max - min + 1); i++)
	{
		all[i] = value;
		value++;
	}
	return (all);
}
