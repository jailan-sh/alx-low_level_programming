#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size
 *
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
