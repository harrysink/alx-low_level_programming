#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element, or NULL if key can't be
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
