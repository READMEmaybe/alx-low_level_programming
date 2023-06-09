#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a list.
 * @head: pointer to pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
