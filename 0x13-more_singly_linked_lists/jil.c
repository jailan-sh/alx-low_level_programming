#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
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
