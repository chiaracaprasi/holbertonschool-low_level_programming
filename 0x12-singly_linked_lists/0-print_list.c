#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list_t given
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
