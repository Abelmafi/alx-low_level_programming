#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table.
 * @key: key element
 * @value: value to be stoared.
 *
 * Return: 1 on success and 0 on failerity.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || ht->size == 0)
		return (0);
	/*if (!key || strlen(key) == 0)*/
		/*return (0);*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	if (index > ht->size)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
