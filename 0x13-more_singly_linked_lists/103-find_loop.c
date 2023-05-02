#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head node of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    /* Check if the list is empty or has only one node */
    if (head == NULL || head->next == NULL)
        return NULL;

    /* Move the slow and fast pointers until they meet */
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* If there is a loop, the slow and fast pointers will eventually meet */
        if (slow == fast)
            break;
    }

    /* If there is no loop, return NULL */
    if (slow != fast)
        return NULL;

    /* Move one of the pointers to the beginning of the list */
    slow = head;

    /* Move both pointers at the same pace until they meet again */
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    /* Return the address of the node where the loop starts */
    return slow;
}
