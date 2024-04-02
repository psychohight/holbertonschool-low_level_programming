#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        nodes++;
        h = h->next;
    }

    return nodes;
}