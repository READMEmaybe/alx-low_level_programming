#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop the head node of a linked list.
 * @head: pointer to pointer of the head of a linked list.
 *
 * Return: the head node's data (n), or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);

	return (n);
}
