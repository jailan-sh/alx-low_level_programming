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
	hash_node_t *item = NULL, *ptr = NULL;
	char *key2 = NULL, *value2 = NULL;
	unsigned long int index;

	if (!key || !ht || !(ht->array))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	value2 = strdup(value);
	if (value2 == 0)
		return (0);
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = value2;
			return (1);
		}
		item = item->next;
	}
	item = ht->array[index];
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		return (free(ptr), 0);
	}
	key2 = strdup(key);
	if (key2 == NULL)
	{
		free(value2);
		free(ptr);
		return (0);
	}
	ptr->key = key2;
	ptr->value = value2;
	ptr->next = item;
	ht->array[index] = ptr;
	return (1);
}
