#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers.
 * @a : integer
 * @size : integer
 * Return : 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, step1, step2;
	int sum = 0;
	int sum2 = 0;

	for (i=0; i <= size; i++)
	{
		step1 = (size + 1) * i;
		sum = sum + *(a + step1);
	}
		for (j = 1; j <=size; j++)
		{
			step2 = (size - 1) * j;

				sum2 = sum2 + *(a + step2);
			}
	printf("%i, %i\n ", sum, sum2);
}
