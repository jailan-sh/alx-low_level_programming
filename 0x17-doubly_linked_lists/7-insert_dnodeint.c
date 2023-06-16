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
	dlistint_t *pre = *h;
	dlistint_t *cur = *h;
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
		return (NULL);
	if ((*h)->next)
		*h = (*h)->next, i++;
	else
		*h = (*h)->prev, i++;
	if (idx > i - 1)
		return (NULL);
	if (cur->next != NULL)
	{
		for (i = 0; i < idx && cur != NULL; i++)
		{
			cur = cur->next;
			pre = cur->prev;

		}
		new->next = cur;
		cur->prev = new;
		new->prev = pre;
		pre->next = new;
	}
	else
	{
		for (i = 0; i < idx && cur != NULL; i++)
                {
                        cur = cur->prev;
			pre = cur->next;
                }
                new->prev = cur;
                cur->next = new;
		new->next = pre;
		pre->prev = new;
	}
	return (new);
}
