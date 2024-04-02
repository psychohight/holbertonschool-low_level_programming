#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
    size_t nodes = 0;

    while (h != NULL)
    {
        nodes++;
        h = h->next;
    }

    return nodes;
}