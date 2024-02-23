#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;

    while (head)
    {
        node = head;
        head = head->next;
        if (head) // Check if head is not NULL
            head->prev = NULL; // Set the prev pointer of the next node to NULL
        free(node);
    }
}
