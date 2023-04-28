#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *	of a linked list
 * @head: pointer to the head of the linked list.
 * @index: the index of the node.
 *
 * Return: the node, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; index; index--)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
