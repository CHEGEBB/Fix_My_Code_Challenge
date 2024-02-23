#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers
 *
 * @head: A pointer to the first element of a list
 *
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *head)
{
    size_t n;

    n = 0;
    while (head)
    {
        printf("%d\n", head->n);
        head = head->next;
        n++;
    }
    return (n);
}
