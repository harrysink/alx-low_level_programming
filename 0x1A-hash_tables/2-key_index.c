#include "hash_tables.h"

/**
 * key_index - this function gives the index of a key
 * @key: key whose index is to be provided
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the
 * array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
