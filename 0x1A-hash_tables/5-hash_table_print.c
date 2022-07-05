#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	char *comma = "";

	if (!ht)
		return;

	putchar('{');
	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		index++;
	}
	puts("}");
}
