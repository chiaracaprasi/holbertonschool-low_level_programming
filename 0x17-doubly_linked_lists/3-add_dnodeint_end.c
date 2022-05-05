#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: pointer to pointer to first node in list_t
 * @n: data to add
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*store head node temporarily for later use */
	dlistint_t *temp = *head;
	/* allocate memory for new node */
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);
	/* assign data(n) to new node */
	newNode->n = n;
	newNode->next = NULL;
	/* if empty list maake new node the head node */
	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return (newNode);
	}
	else
	{
		/* traverse through the list */
		while (temp->next != NULL)
			temp = temp->next;
		/*last node is now temp, point the next last node to newNode */
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
