#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delet node at a given position
 * @head: linked list given
 * @index: index of the node should be removed - start at 0
 * Return: 1 for success or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *tmp, *next;

	/* list is empty */
	if (*head == NULL)
		return (-1);

	tmp = *head;

	/* head needs to be removed */
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (0);
	}

	/* find previous node of the node to be delete */
	for (count = 0; tmp != NULL && count < index - 1; count++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	next = tmp->next->next;

	free(tmp->next);
	tmp->next = next;

	return (0);
}
