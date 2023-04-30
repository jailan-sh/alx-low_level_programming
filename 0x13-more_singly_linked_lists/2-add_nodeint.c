#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n : new int element in new node
 * @head : linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	const int num = n;

	new = malloc(sizeof(listint_t));
	if  (new == NULL)
	{
		return (NULL);
	}
		new->n = num;
		new->next = *head;
		*head = new;
		return (new);
}
