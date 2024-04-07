#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *current;
    
    new_node = malloc(sizeof(dlistint_t));
    
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) 
    {
        new_node->prev = NULL;
        *head = new_node;
    } 
    
    else 
    {
        current = *head;
        
        while (current->next != NULL) 
        {
            current = current->next;
        }
        
        new_node->prev = current;
        current->next = new_node;
    }

    return (new_node);
}