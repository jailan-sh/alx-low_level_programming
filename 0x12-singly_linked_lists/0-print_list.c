#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h : pointer to the linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr = h;

	if (h == NULL)
	printf("\n");

	while (ptr != NULL)
	{
		count++;
		if (ptr->str != NULL)
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	ptr = ptr->next;
	}
	return (count);
}
