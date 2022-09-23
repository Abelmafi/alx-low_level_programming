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
	int i;
	hash_node_t *new_node;
	char *new_key = strdup(key), *new_value = strdup(value);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)new_key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = new_value;
			return 0;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
