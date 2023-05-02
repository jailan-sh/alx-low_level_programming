#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head : pointer to the pointer to first node in linked list
 * @index : of the node that should be delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (i < index)
	{
		if (ptr == NULL || ptr->next == NULL)
		{
			return (-1);		}
		temp = ptr;
		ptr = ptr->next;
		i++;
	}
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
