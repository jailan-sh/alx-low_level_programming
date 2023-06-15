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
		if (head->next == NULL)
		{
			while (head)
			{
				node = head->prev;
				free(head);
				head = node;
			}
		}
		else if (head->next != NULL)
		{
			while (head)
			{
				node = head->next;
				free(head);
				head = node;
			}
		}
	}
		free(head);
}
