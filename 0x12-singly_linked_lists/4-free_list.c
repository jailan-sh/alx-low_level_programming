#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list.
 * @head : pointer to linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			next_node = current->next;
			free(current->str);
			free(current);
			current = next_node;
		}
	}
}
