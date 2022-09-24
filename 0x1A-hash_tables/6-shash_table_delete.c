#include "hash_tables.h"
#include <stdlib.h>

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 *
 * Return: always nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node->snext);
				free(node->sprev);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
