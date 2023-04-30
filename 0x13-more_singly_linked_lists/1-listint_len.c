#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h : pointer to liked list
 *
 * Return: number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		count++;
		h = h->next;
	}
	else
	{
		return (0);
	}
	count += 1;
	return (count);
}
