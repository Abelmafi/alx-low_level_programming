#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of hash table
 *
 * Return: newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int i;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);
	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * t->size);
	if (t->array == NULL)
		return (NULL);
	for (i = 0; i < t->size; i++)
		t->array[i] = 0;

	return (t);
}
