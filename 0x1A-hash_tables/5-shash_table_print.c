#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * shash_table_print - prints a hash table.
 * @ht: hash table.
 *
 * Return: always nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = ht->shead;

	if (!ht)
		return;
	printf("{");
	while (temp->snext)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp->snext)
			printf(", ");
	}
	printf("}\n");
}
