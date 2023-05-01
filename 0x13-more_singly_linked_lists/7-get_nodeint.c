#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head : pointer to the liked list
 * @index : the index of the node, starting at 0
 *
 * Return: the nth node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	if (index == 0)
	{
		return (head);
	}
	ptr = head;
	while (i < index)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
			i++;
	}
	return (ptr);
}
