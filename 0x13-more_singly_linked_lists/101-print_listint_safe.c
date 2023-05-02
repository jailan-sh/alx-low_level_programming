#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    size_t count = 0;
    int loop_detected = 0;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
            loop_detected = 1;
            break;
        }
    }

    if (!loop_detected)
    {
        while (head != NULL)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            count++;
            head = head->next;
        }
    }

    return count;
}
