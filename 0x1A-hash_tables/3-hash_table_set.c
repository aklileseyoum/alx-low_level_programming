#include "hash_tables.h"

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * @index: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int index)
{
	hash_node_t *node;
	char *keys;
	char *values;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	keys = strdup(key);
	if (!keys)
	{
		free(node);
		return (0);
	}

	values = strdup(value);
	if (!values)
	{
		free(keys);
		free(node);
		return (0);
	}

	node->key = keys;
	node->value = values;

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *v;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];

	while (node && (strcmp(key, node->key)))
		node = node->next;
	if (node)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, index));
}
