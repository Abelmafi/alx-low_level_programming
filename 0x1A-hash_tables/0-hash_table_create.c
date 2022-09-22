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

	t = malloc(sizeof(hash_table_t));
	t->size = size;
	t->array = malloc(sizeof(hash_node_t) * size);

	return (t);
}
