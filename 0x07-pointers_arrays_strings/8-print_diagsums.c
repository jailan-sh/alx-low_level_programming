#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of
 * a square matrix of integers.
 * @a : integer
 * @size : integer
 * Return : 0
 */

void print_diagsums(int *a, int size)
{
	int index, sum = 0, sum_2 = 0;

	for (index = 0; index < size; index++)
	{
		sum += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum_2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum, sum_2);

}
