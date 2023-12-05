#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Retourne le n-ième nœud d'une liste doublement chaînée.
 * @head: Pointeur vers la tête de la liste.
 * @index: Index du nœud à récupérer, en commençant par 0.
 *
 * Return: Adresse du nœud recherché, ou NULL si le nœud n'existe pas.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return current;
}

