#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h : pointer to the first node in the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
		while (h != NULL)
		{
			printf("%i\n", h->n);
			h = h->next;
			count++;
		}
		return (count);
}
