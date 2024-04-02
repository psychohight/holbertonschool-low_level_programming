#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
     list_t *next;

    while (head != NULL)
    {
        next = head->next;
        free(head->str);
        free(head);
        head = next;
    }
}