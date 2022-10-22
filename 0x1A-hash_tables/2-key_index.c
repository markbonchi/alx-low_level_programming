#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table
 * @key: string key value
 * @size: size of the hash table
 * Return: hash table index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
