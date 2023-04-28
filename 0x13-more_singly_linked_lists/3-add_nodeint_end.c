#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node
 *	at the end of a list.
 * @head: the head of the list.
 * @n: the int to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
		*head = node;
	else
	{
		listint_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
