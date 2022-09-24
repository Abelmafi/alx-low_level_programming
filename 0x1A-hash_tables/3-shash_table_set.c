#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table.
 * @key: key element
 * @value: value to be stoared.
 *
 * Return: 1 on success and 0 on failerity.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *tmp;
	char *new_key = strdup(key), *new_value = strdup(value);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)new_key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = new_value;
					return (1);
			}
			tmp = tmp->next;
		}
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	new_node->snext = ht->shead;
	new_node->sprev = NULL;
	if (ht->shead != NULL)
		ht->shead->sprev = new_node;
	ht->shead = new_node;

	return (1);
}
