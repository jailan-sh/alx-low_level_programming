#include "hash_tables.h"

/**
 * key_index - gives index of key
 *
 * @size :size of array
 * @key : key
 *
 * Return: index of a key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int i;

	i = hash_djb2(key);
	index = i % size;
	return (index);
}
