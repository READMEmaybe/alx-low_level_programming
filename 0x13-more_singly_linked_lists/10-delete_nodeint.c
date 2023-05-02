#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - functiont that deletes the node at @index
 *	a linked list.
 * @head: pointer to the pointer to the head of the linked list.
 * @index: index to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!(temp->next))
			return (-1);
		temp = temp->next;
	}

	node = temp->next;
	temp->next = node->next;
	free(node);
}
