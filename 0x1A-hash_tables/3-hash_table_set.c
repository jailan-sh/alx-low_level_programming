#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht : hash table
 * @key : key
 * @value : value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	hash_node_t *ptr;
	unsigned long int i, hash;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	if (key == NULL)
		return (0);
	item->key = (char *) key;
	item->value = (char *) value;
	item->next = NULL;

	hash = hash_djb2((const unsigned char *)key);
	i = hash % ht->size;
	
	if (ht->array[i] == NULL)
	{
		ht->array[i] = item;
	}
	else
	{
		ptr = ht->array[i];
		item->next = ptr;
		ptr->next = NULL;
	}
	return (1);
}


