#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete hash_table.
 * @ht: hash table.
 *
 * Return: alwayas nothng.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *current;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				current = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = current;
			}
		}
	}
	free(ht->array);
	free(ht);
}
