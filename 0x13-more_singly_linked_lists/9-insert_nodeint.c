#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a node in the middle of the list
 * @head: head pointer of the list
 * @idx: index of the node to be inserted
 * @n: the node's data to be inserted
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new;

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	new->n = n;

	return (new);
}
