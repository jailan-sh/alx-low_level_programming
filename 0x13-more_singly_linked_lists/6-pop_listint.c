#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head : pointer to the pointer link list
 *
 * Return: the head node’s data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	return ((*head)->n);
}
