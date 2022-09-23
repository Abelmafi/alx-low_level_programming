#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 *
 * Return: always nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	unsigned char flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
				printf(", ");
			temp = ht->array[i];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next)
					printf(", ");
				temp = temp->next;
			}
			flag = 1;
		}
	}
	printf("}\n");
}
