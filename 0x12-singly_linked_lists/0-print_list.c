#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of @h
 * @h: a list_t list.
 *
 * Return: the number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	
	if (!h)
		return (NULL);
	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
