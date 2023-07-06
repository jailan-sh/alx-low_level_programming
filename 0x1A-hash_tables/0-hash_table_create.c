#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size : size of array hash table
 *
 * Return: hash_table or NULL if something goes wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;

	new_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
