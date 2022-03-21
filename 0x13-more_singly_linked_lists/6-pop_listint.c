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

	if (*head == NULL || head == NULL)
		return (0);

	*head = (*head)->next;
	free(tmp);

	return ((*head)->n);
}
