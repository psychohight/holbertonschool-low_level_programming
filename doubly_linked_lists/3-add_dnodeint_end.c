#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste doublement chaînée.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @n: Valeur à attribuer à la nouvelle node.
 *
 * Return: Adresse de la nouvelle node, ou NULL en cas d'échec.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

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

	return new_node;
}
