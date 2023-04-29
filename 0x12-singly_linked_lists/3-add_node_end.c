#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *add_node_end - function that adds a new node at the end of a list_t list.
 * @head : pointer to pointer to linked list
 * @str: The string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *temp;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (0);
	}

	new->str = s;
	new->len = strlen(s);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	}
	return (*head);
}
