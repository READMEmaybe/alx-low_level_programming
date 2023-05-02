#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the pointer to the head of the linked list.
 *
 * Return: pointer to the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
