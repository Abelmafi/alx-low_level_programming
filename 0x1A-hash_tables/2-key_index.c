#include "hash_tables.h"
/**
 * key_index - gives the index of a key.
 * @key: key element
 * @size: array size.
 *
 * Return: indez of key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key) % size;
	return (index);
}
