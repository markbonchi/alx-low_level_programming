#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the hash map
 * Return: table
 */

hash_table_t *hash_table_create(unsigned int size)
{
	unsigned int i;
	hash_table_t *table;
	hash_node_t **arr;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	table->array = arr;
	table->size = size;
	return (table);
}
