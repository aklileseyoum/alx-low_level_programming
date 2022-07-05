#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key
 * Return: the value associated with the key, other wise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	if (!tmp)
		return (NULL);
	while ((tmp && tmp->key) && strcmp(tmp->key, key))
		tmp = tmp->next;
	return (tmp->value);
}
