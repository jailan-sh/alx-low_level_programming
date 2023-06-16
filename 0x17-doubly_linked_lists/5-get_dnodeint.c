#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head : head pointer
 * @index : index
 *
 * Return: n of given indexnode or
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	for (i = 0; i < index && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
