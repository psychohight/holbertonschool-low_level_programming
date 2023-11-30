#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste doublement chaînée.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @n: Valeur à attribuer à la nouvelle node.
 *
 * Return: Adresse de la nouvelle node, ou NULL en cas d'échec.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
