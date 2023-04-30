#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head : pointer to linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL)
	{
		return;
	}
		current = *head;
		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
		*head = NULL;
}
