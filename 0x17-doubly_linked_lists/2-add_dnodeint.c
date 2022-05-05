#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to pointer to first node in list_t
 * @n: data to add
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head == NULL)
		newNode->next = NULL;
	else
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
