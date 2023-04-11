#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,and
 * initializes it with a specific char
 * @size : size of array
 * @c : char to inintialize with
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

		ar = malloc(size * sizeof(char));
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ar[i] = c;
	ar[i] = '\0';
	return (ar);
}
