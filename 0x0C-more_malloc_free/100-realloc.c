#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr : pointer
 * @old_size : size of pointer
 * @new_size : new size to allocate
 * Return: 0 if no enough memory or new
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(new, ptr, old_size);
	}
	else
	{
		memcpy(new, ptr, new_size);
	}
	free(ptr);
	return (new);
}
