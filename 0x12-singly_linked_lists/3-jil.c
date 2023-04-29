#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds a new node at the end of a list_t
 * @head : pointer to linked list first node
 * @str : string element need to added in linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	char *wor;

	ptr = (malloc(sizeof(list_t)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	temp = *head;
	if (str == NULL)
	{
		ptr->str = 0;
		ptr->len = 0;
	}
	else
	{
			wor = strdup(str);
			if (wor == NULL)
			{
				free(wor);
				return (0);
			}
			ptr->str = wor;
			ptr->len = strlen(wor);
	}
			ptr->next = NULL;

			if (temp == NULL)
			{
				*head = ptr;
			}
			else
			{
				while (temp->next != NULL)
				{
					temp = temp->next;
					temp->next = ptr;
			}}

			return (temp);
}
