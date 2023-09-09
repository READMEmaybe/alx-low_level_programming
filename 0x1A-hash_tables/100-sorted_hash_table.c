#include "hash_tables.h"


/**
 * shash_table_create - Creates a new hash table with a given size.
 * @size: The size of the hash table to create.
 *
 * Return: A pointer to the newly created hash table, or NULL if memory
 * allocation fails.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;
	new_hash_table->shead = NULL;
	new_hash_table->stail = NULL;

	return (new_hash_table);
}

/**
 * shash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: The hash table in which to add or update the key-value pair.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure (if memory allocation fails or if @ht
 * is NULL).
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node;
	shash_node_t *current;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL && ht->stail == NULL)
		ht->shead = ht->stail = new_node;
	else
	{
		current = ht->shead;
		while (current != NULL)
		{
			if (strcmp(new_node->key, current->key) < 0)
			{
				new_node->snext = current;
				new_node->sprev = current->sprev;
				current->sprev = new_node;
				if (new_node->sprev != NULL)
					new_node->sprev->snext = new_node;
				else
					ht->shead = new_node;
				return (1);
			}
			current = current->snext;
		}
		new_node->sprev = ht->stail;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated
 *			with a key in a sorted hash table.
 * @ht: The sorted hash table from which to retrieve the value.
 * @key: The key for which to retrieve the value.
 *
 * Return: The value associated with the key if found; otherwise, NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current;

    if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the key-value pairs of a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    printf("{");
    for (current = ht->shead; current != NULL; current = current->snext)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->snext)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the key-value pairs of a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    printf("{");
    for (current = ht->stail; current != NULL; current = current->sprev)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->sprev)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Frees the memory used by a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
            temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    free(ht->array);
    free(ht);
}
