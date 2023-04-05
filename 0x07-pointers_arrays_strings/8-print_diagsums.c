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
	int i;
	int j = size - 1;
	int sum = 0;
	int sum_2 = 0;

	while (i <= (size * size))
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	while (j < (size * (size - 1)))
	{
			sum_2 += a[j];
			j = j + size - 1;
	}

	printf("%d, %d\n", sum, sum_2);

}
