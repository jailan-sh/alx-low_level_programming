#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head : pointer to head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
	{
		while (head)
		{
			node = head->prev;
			free(head);
			head = node;
		}
	}
}
