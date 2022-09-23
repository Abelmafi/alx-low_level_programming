#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete hash_table.
 * @ht: hash table.
 *
 * Return: alwaya nothng.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *current;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				current = temp;
				temp = temp->next;
				free(current);
			}
		}
	}
	free(ht);
}