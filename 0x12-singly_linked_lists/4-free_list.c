#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that free a list_t list.
 * @head: list_t given
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
