#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list given
 * Return: the head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	*head = tmp->next;
	// int n is to store the data value of new head node
	n = tmp->n;
	free(tmp);

	return (n);
}
