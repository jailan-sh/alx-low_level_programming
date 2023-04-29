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

	ptr = (list_t *)(malloc(sizeof(list_t)));
	if (ptr == NULL)
	{
		return (NULL);
	}
			ptr->str = strdup(str);
			ptr->len = strlen(str);
			ptr->next = NULL;

			if (*head == NULL)
			{
				*head = ptr;
			}
			else
			{
				temp = *head;

				while (temp->next != NULL)
				{
					temp = temp->next;
					temp->next = ptr;
			}}

				printf("[%u] %s\n", ptr->len, ptr->str);
			return (ptr);
}
