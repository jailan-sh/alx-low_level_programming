#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht : hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			item = item->next;
			comma = 1;
		}
	}
	printf("}\n");
}
