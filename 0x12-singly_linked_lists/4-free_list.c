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
	free(head->str);
	free(head->next);
	free(head);
}
