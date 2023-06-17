#include "lists.h"

/**
 * len_list - Returns the number of elements in a doubly linked list
 * @h: dlinked list
 *
 * Return: len list
 */
size_t len_list(const dlistint_t *h)
{
	size_t num= 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head of doubly linked list
 * @index: index to look for
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;

	temp = *head;
	if (*head == NULL || index > len_list(temp))
		return (-1);
	if (index == 0 && temp->next)
	{
		temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	else if (index == 0 && temp)
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	while (idx < index)
	{
		temp = temp->next;
		idx++;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
