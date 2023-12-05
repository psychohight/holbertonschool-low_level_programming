#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Retourne la somme de toutes les données (n) d'une liste doublement chaînée.
 * @head: Pointeur vers la tête de la liste.
 *
 * Return: Somme de toutes les données, ou 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return sum;
}
