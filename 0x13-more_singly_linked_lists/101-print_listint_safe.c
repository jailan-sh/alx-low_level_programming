#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head : pointer to linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *prev;
	unsigned int count = 0;

	current = head;
	if (current == 0)
		return (0);

	while (current != 0)
	{
		prev = current;
		current = current->next;

		count++;

		printf("[%p] %d\n", (void *)prev, prev->n);

		if (prev <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (count);
}
