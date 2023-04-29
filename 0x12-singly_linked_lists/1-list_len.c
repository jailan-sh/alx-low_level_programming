#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h : pointer to linkes list
 *
 * Return: the number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr = h;

	if (h == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		count++;
	ptr = ptr->next;
	}
	return (count);
}
