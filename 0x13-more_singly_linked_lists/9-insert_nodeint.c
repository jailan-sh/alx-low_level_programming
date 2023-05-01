#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head : pointer to the first node in linked list
 * @idx : position
 * @n : n value
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int num = n;
	unsigned int index = 0;
	listint_t *ptr = *head;
	listint_t *ptr2;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == 0)
	{
		return (0);
	}
	ptr2->n = num;
	ptr2->next = NULL;

	while (index < idx - 1)
	{
		ptr = ptr->next;
		index++;
	}
	if (ptr == NULL)
	{
		free(ptr2);
		return (NULL);
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
