#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 *	at a given position.
 * @idx: the index to insert to.
 * @n: the int to insert.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	for (i = 0;i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;
	

	return (node);
}
