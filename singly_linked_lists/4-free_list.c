#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 * @current: nbr
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
		{
			current = head;
			head = head->next;

			free(current->str);
			free(current);
        }
}
