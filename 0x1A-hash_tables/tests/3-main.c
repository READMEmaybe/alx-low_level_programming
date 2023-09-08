#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    int result = hash_table_set(ht, "hetairas", "001");
	if (result) {
        printf("Added key1: value1 to the hash table.\n");
    } else {
        printf("Failed to add key1: value1 to the hash table.\n");
    }
	result = hash_table_set(ht, "heliotropes", "002");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "depravement", "003");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "stylist", "004");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "joyful", "005");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "mentioner", "006");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "neurospora", "007");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "serafins", "008");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "subgenera", "009");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }
	result = hash_table_set(ht, "synaphea", "010");
    if (result) {
        printf("Updated key1 to new_value in the hash table.\n");
    } else {
        printf("Failed to update key1 in the hash table.\n");
    }

	for (int i = 0; i < ht->size; i++) {
        hash_node_t *current = ht->array[i];
        if (current != NULL) {
            printf("Bucket %d:\n", i);
            while (current != NULL) {
                printf("  Key: %s, Value: %s\n", current->key, current->value);
                current = current->next;
            }
        }
    }
    return (EXIT_SUCCESS);
}