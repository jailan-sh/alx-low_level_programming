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
	dlistint_t *tmp, *new;
	unsigned int i = 0;
	unsigned int count = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	if (idx == count)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	while (i < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	new->next->prev = new;
	return (new);
}

