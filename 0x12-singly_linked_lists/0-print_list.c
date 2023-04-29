#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * list_t *h : pointer to the linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		exit(0);

	while (h != NULL)
	{
		count++;
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	h = h->next;
	}
	return (count);
}		
