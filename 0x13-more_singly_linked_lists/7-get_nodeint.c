#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of linked list.
 * @head: linked list given
 * @index: index of the node starting at 0
 * Return: the nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	if (index == 0)
		return (head);

	while (head != NULL && count < index)
	{
		count++;
		head = head->next;
	}
	return (current);
}
