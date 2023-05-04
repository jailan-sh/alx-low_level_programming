#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int rem;
	unsigned int decimal = 0;
	unsigned int weight = 1;
	unsigned int binary = 0;
	int i = 0;

	if  (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			binary <<= 1;
		}
		else if (b[i] == '1')
		{
			binary <<= 1;
			binary |= 1;
		}
		else
		{
			return (0);
		}
	}

	while (binary != 0)
	{
		rem = binary & 1;
		decimal = decimal + rem * weight;
		weight = weight * 2;
		binary >>= 1;
	}
	return (decimal);
}
