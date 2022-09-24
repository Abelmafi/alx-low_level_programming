#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (t->array == NULL)
		return (NULL);

	for (i = 0; i < t->size; i++)
		t->array[i] = NULL;
	t->shead = NULL;
	t->stail = NULL;

	return (t);
}

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

	if (ht == NULL || key == NULL || *key == '\0')
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

	if (!ht->shead)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) <= 0)
			tmp = tmp->snext;
		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_node;
		else
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}
	return (1);
}

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
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext)
			printf(", ");
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table.
 * @ht: hash table.
 *
 * Return: always nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = ht->stail;

	if (!ht)
		return;
	printf("{");
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev)
			printf(", ");
		temp = temp->sprev;
	}
	printf("}\n");
}
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

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
