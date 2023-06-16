#include "lists.h"

/**
 * insert_dnodeint_at_index - a new node at a given position.
 * @h : head
 * @idx : index
 * @n : data
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur, *pre, *temp, *ptr = *h;
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
		return (NULL);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	if (idx == 0)
	{
		new->prev = NULL, new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
		cur = cur->next;

	new->next = cur;
	new->prev = pre;
	ptr->next = new;
	if (cur)
		cur->prev = new;
	return (new);
}
