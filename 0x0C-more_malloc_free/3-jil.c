#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *all;
	int i;

	if (min > max)
		return (NULL);
	all = malloc((max - min + 1) * sizeof(int));
	if (all == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		all[i] = min + i;
	}
	return (all);
}
