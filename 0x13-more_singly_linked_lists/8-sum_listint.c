#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head : pointer to linked list
 *
 * Return: list is empty 0, otherwise the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == 0)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
