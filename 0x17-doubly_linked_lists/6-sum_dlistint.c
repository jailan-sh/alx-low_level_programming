#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head : dll
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int num = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
