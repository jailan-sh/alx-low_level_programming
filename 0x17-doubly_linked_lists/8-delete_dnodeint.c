#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer head
 * @index: index 
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *tmp1 = *head;
       dlistint_t *tmp2 = *head, *tmp3;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	if (index > (i - 1))
		return (-1);

	if (index == 0)
	{
		tmp1 = tmp1->next;
		free(*head);
		*head = tmp1;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (i= 0; i < index; i++)
		tmp1 = tmp1->next;

	tmp2->next = tmp1->next;
	tmp3 = tmp1->next;
	if (tmp3)
		tmp3->prev = tmp2;
	free(tmp1);
	return (1);
}

