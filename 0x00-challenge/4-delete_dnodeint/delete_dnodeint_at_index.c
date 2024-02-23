#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *prev_node;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    current = *head;

    // Special case: deleting the head node
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    // Traverse to the node at the specified index
    for (i = 0; current != NULL && i < index; i++)
    {
        prev_node = current;
        current = current->next;
    }

    // Check if index is out of bounds
    if (current == NULL)
        return (-1);

    // Adjust pointers to remove the node at the specified index
    prev_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = prev_node;

    free(current);
    return (1);
}
