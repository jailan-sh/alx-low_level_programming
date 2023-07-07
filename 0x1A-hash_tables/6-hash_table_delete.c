#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht : hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *ptr;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			ptr = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = ptr;
		}
	}
	free(ptr);
	free(ht->array);
	free(ht);
}
