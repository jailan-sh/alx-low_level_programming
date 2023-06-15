#include "lists.h"
/**
 * dlistint_len -  number of the elements of a dlistint_t list.
 * @h : douple linklist
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
