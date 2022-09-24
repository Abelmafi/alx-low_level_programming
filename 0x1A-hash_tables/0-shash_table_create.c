#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * shash_table_create - create hash table
 * @size: size of hash table
 *
 * Return: newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t;
	unsigned long int i;

	t = malloc(sizeof(shash_table_t));
	if (t == NULL)
		return (NULL);
	t->size = size;
	t->array = malloc(sizeof(shash_node_t *) * t->size);
	t->shead = malloc(sizeof(shash_node_t *));
	t->stail = malloc(sizeof(shash_node_t *));

	if (t->array == NULL)
		return (NULL);
	for (i = 0; i < t->size; i++)
		t->array[i] = 0;

	return (t);
}
