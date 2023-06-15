#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h : douple linklist
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h && h->prev)
	{
		h = h->prev;
	}
	while (h)
	{
		num++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (num);
}
