#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to first node in list_t
 * @str: string given
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	char *str_cpy = strdup(str);

	if (newNode == NULL || str_cpy == NULL)
		return (NULL);

	newNode->str = str_cpy;
	newNode->len = strlen(str_cpy);

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (newNode);
}
