#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_get - retrives a value associated with given key.
 * @ht: hash table.
 * @key: key element.
 *
 * Return: value associated with key or NULL if its not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
