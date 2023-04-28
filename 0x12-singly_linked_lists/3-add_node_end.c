#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function that returns the length if @str
 * @str: the string
 *
 * Return: the length.
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * add_node_end - function that adds a new node at the end
 *	of the list.
 * @head: head of list
 * @str: the string to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	if (!*head)
		*head = node;
	else
	{
		list_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = node;

	return (node);
}
