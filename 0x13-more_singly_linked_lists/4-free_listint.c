#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head : pointer to the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next_node;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
	}
}
