#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: linked list given
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

}
