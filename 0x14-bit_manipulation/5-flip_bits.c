#include "main.h"
#include <stdlib.h>

/**
 * flip_bits -  flip to get from one number to another.
 * @n : first number
 * @m : result wasnted
 *
 * Return: number of bit needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = n ^ m;
	int count = 0;

	while (c != 0)
	{
		count += c & 1;
		c >>= 1;
	}
	return (count);
}
