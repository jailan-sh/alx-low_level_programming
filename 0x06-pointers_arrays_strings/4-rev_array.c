#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start;


	n -= 1;
	start = 0;
	while (n > start && a[n] != '\0')
	{
		temp = a[start];
		a[start] = a[n];
		a[n] = temp;
		start++;
		n--;
	}
}
