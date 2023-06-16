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
	dlistint_t *pre, *cur, *tail;
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
		return (NULL);
	if ((*h)->prev == NULL)
	{
		while ((*h)->prev != NULL)
		{
			(*h) = (*h)->prev;
		}
	}
	tail = *h;
	while (tail->next)
		tail = tail->next, i++;
	if (idx > i)
		return (NULL);
	cur = *h;
	if (cur->next != NULL)
	{
		for (i = 0; i < idx && cur != NULL; i++)
		{
			cur = cur->next;
			pre = cur->prev;
		}
		pre = cur->next;
		cur->next = new;
		new->prev = cur;
		new->next = pre;
		pre->prev = new;
	}
	return (*h);
}
